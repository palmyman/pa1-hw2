pa1-hw2
=======

Programming in C - Homework 2 (Euler function)

Úkolem je vytvořit program, který bude počítat hodnotu Eulerovy funkce φ (phi).

Eulerova funkce φ udává pro zadané celé kladné číslo n počet čísel 1, 2, 3, ..., n-1 takových, že jsou nesoudělná s n. Dvě čísla jsou soudělná, pokud mají alespoň jednoho společného dělitele ≥ 2. Tedy například pro číslo 15:

*  1   nesoudělné        
*  2   nesoudělné          
   3   soudělné (3)        
*  4   nesoudělné        
   5   soudělné (5)        
   6   soudělné (3)      
*  7   nesoudělné        
*  8   nesoudělné
  9   soudělné (3)
10   soudělné (5) 
* 11   nesoudělné
12   soudělné (3)
* 13   nesoudělné
* 14   nesoudělné

Tedy φ(15) = 8, protože nesoudělných s 15 je celkem 8 čísel (1, 2, 4, 7, 8, 11, 13 a 14).

Eulerova funkce φ je jednou z funkcí, které tvoří základy diskrétní matematiky. Využívána je například v šifrování, když se generují RSA klíče. Náš jednoduchý program si klade za cíl procvičit používání cyklů, které jsou pro její výpočet potřeba.

Vstupem programu je kladné celé číslo n, pro které máme najít hodnotu Eulerovy funkce φ.

Výstupem programu je nalezená hodnota funkce φ, formát je zřejmý z ukázek. Za výpisem je odřádkování.

Program musí být schopen detekovat nesprávný vstup. Pokud je na vstupu nesmyslné zadání, program to zjistí, vypíše chybové hlášení a ukončí se. Formát chybového hlášení je uveden v ukázce níže. Pozor, za případným chybovým hlášením je odřádkování (\n). Chybové hlášení zasílejte na standardní výstup (printf), nezasílejte jej na chybový výstup. Za chybu je považováno:

    nečíselná hodnota n,
    nulové nebo záporné n.
