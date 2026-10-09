# Strukture podataka

Repozitorij sadrži rješenja zadataka s laboratorijskih vježbi iz kolegija **Strukture podataka**.

## Zadaci

### 1. Dinamička alokacija memorije i strukture

Napisati program koji:

* Čita broj redaka u datoteci, odnosno broj studenata zapisanih u datoteci.
* Dinamički alocira memoriju za niz struktura studenata (`ime`, `prezime`, `bodovi`).
* Učitava sve zapise iz datoteke.
* Ispisuje ime, prezime, apsolutni i relativni broj bodova svakog studenta.

**Napomena:** Svaki redak datoteke sadrži ime i prezime studenta te broj bodova ostvarenih na kolokviju.

Relativni broj bodova računa se prema formuli:

`relativni_broj_bodova = broj_bodova / maksimalni_broj_bodova * 100`

### 2. Jednostruko vezana lista

Definirati strukturu `osoba` koja sadrži ime, prezime i godinu rođenja te napisati program koji omogućuje:

* Dinamičko dodavanje novog elementa na početak liste.
* Ispis liste.
* Dinamičko dodavanje novog elementa na kraj liste.
* Pronalaženje elementa prema prezimenu.
* Brisanje određenog elementa iz liste.

**Napomena:** Nije dopušteno korištenje globalnih varijabli.

### 3. Proširenje funkcionalnosti vezane liste

Prethodni zadatak proširiti funkcijama za:

* Dinamičko dodavanje novog elementa iza određenog elementa.
* Dinamičko dodavanje novog elementa ispred određenog elementa.
* Sortiranje liste prema prezimenima osoba.
* Zapisivanje liste u datoteku.
* Učitavanje liste iz datoteke.

### 4. Zbrajanje i množenje polinoma

Napisati program za zbrajanje i množenje polinoma. Koeficijenti i eksponenti polinoma učitavaju se iz datoteke.

**Napomena:** Eksponenti u datoteci nisu nužno sortirani.

### 5. Izračunavanje postfiksnog izraza pomoću stoga

Napisati program koji iz datoteke učitava postfiksni izraz i pomoću stoga izračunava njegov rezultat.

Stog je potrebno implementirati pomoću vezane liste.

### 6. Evidencija računa i artikala

Napisati program koji čita datoteku `racuni.txt`, u kojoj su zapisani nazivi datoteka koje predstavljaju pojedinačne račune.

Format podataka:

* Na početku svake datoteke nalazi se datum izdavanja računa u formatu `YYYY-MM-DD`.
* Svaki sljedeći redak sadrži podatke o artiklu u formatu `naziv, količina, cijena`.

Potrebno je:

* Formirati vezanu listu računa sortiranu prema datumu.
* U svakom čvoru liste računa pohraniti vezanu listu artikala sortiranu prema nazivu artikla.
* Omogućiti korisniku upit o ukupno potrošenom novcu i ukupnoj količini kupljenog artikla u zadanom vremenskom razdoblju.

### 7. Simulacija strukture direktorija

Napisati program koji pomoću vezanih lista organiziranih u obliku stabla predstavlja strukturu direktorija.

Potrebno je omogućiti:

* Kreiranje novih direktorija i poddirektorija.
* Ispis sadržaja direktorija.
* Povratak u prethodni direktorij.

Program putem izbornika treba simulirati sljedeće DOS naredbe:

1. `md` – kreiranje direktorija.
2. `cd dir` – ulazak u poddirektorij.
3. `cd ..` – povratak u prethodni direktorij.
4. `dir` – ispis sadržaja direktorija.
5. Izlaz iz programa.

### 8. Binarno stablo pretraživanja

Napisati program koji omogućuje rad s binarnim stablom pretraživanja (BST).

Potrebno je omogućiti:

* Umetanje novog elementa u stablo.
* Ispis elemenata pomoću prolazaka `inorder`, `preorder`, `postorder` i `level order`.
* Brisanje elementa iz stabla.
* Pretraživanje stabla i pronalaženje određenog elementa.

### 9. Transformacija binarnog stabla

Zadan je niz brojeva:

`2, 5, 7, 8, 11, 1, 4, 2, 3, 7`

Brojeve je potrebno pohraniti u čvorove binarnog stabla.

**a) Umetanje elemenata**

Napisati funkciju `insert` koja dodaje element u stablo tako da se uzastopnim pozivima funkcije za sve elemente zadanog niza formira stablo prikazano na slici 1. Funkcija vraća pokazivač na korijen stabla.

**b) Zamjena vrijednosti čvorova**

Napisati funkciju `replace` koja svaki element stabla zamjenjuje zbrojem elemenata u njegovu lijevom i desnom podstablu, odnosno zbrojem vrijednosti svih njegovih potomaka prije zamjene njihovih vrijednosti.

Stablo sa slike 1 treba se transformirati u stablo prikazano na slici 2.

**c) Generiranje slučajnih brojeva i zapis u datoteku**

Prepraviti program tako da se umjesto unaprijed definiranog cjelobrojnog polja pomoću funkcije `rand()` generiraju slučajni brojevi u rasponu od 10 do 90.

U datoteku je potrebno zapisati sve brojeve dobivene `inorder` prolaskom:

* Nakon izvršavanja funkcije iz dijela a).
* Nakon izvršavanja funkcije iz dijela b).

### 10. Organizacija država i gradova

Napisati program koji čita datoteku `drzave.txt`, u kojoj su zapisani nazivi država i nazivi dodatnih datoteka s podacima o njihovim gradovima.

Svaka datoteka koja predstavlja pojedinu državu sadrži popis gradova u formatu:

`naziv_grada, broj_stanovnika`

**a) Lista država i stabla gradova**

Formirati sortiranu vezanu listu država prema nazivu. Svaki čvor liste sadrži stablo gradova sortirano prema broju stanovnika, a zatim prema nazivu grada.

**b) Stablo država i liste gradova**

Formirati stablo država sortirano prema nazivu. Svaki čvor stabla sadrži vezanu listu gradova sortiranu prema broju stanovnika, a zatim prema nazivu grada.

Nakon formiranja struktura potrebno je:

* Ispisati države i njihove gradove.
* Omogućiti korisniku pretraživanje gradova unutar odabrane države prema minimalnom broju stanovnika unesenom putem tipkovnice.

### 11. Hash tablica država

Prepraviti prethodni zadatak tako da se države pohranjuju u hash tablicu s 11 mjesta.

Funkcija za izračun ključa:

1. Zbraja ASCII vrijednosti prvih pet slova naziva države.
2. Izračunatu vrijednost dijeli s veličinom tablice i uzima ostatak cjelobrojnog dijeljenja.

Države koje imaju isti ključ pohranjuju se u vezanu listu sortiranu prema nazivu države.

Svaki čvor vezane liste sadrži stablo gradova sortirano prema broju stanovnika, a zatim prema nazivu grada.
