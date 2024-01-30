const express = require('express');
const bodyParser = require('body-parser');
const app = express();
const PORT = 3000;

app.use(bodyParser.json());

app.post('/api/ricerca', (req, res) => {
    const testoRicerca = req.body.testoRicerca;
    const risultati = eseguiQueryRicerca(testoRicerca);
    res.json({ risultati });
});

app.listen(PORT, () => {
    console.log(`Server in ascolto sulla porta ${PORT}`);
});

function eseguiQueryRicerca(testoRicerca) {
    // Utilizza string-similarity per calcolare la similarità tra il testo di ricerca
    // e i nomi e le descrizioni degli elementi
    const similaritaNomi = stringSimilarity.findBestMatch(testoRicerca, elementi.map(e => e.Nome));
    const similaritaDescrizioni = stringSimilarity.findBestMatch(testoRicerca, elementi.map(e => e.Descrizione));

    // Combina i risultati delle similarità per ottenere un elenco di elementi ordinati per rilevanza
    const risultatiParziali = elementi.map((elemento, index) => ({
        elemento,
        similarita: (similaritaNomi.ratings[index].rating + similaritaDescrizioni.ratings[index].rating) / 2
    }));

    // Ordina gli elementi per rilevanza
    const risultatiOrdinati = risultatiParziali.sort((a, b) => b.similarita - a.similarita);

    // Restituisci solo gli elementi con similarità significativa
    const sogliaSimilarita = 0.2;
    const risultatiFiltrati = risultatiOrdinati.filter(risultato => risultato.similarita > sogliaSimilarita);

    // Restituisci solo le informazioni rilevanti degli elementi
    return risultatiFiltrati.map(risultato => risultato.elemento);
}
