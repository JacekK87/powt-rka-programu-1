<h1>Zadanie domowe dotyczace pierwszego zadania</h1>
<p> Sprawdzamy gdzie jesteśmy wpisujac<em> pdw</em></p>
<p> Nastepnie za pomoca komendy<em>cd Pulpit</em> przechodzimy na pulpit</p>
<p> Jezeli na pulpicie nie ma forderu, to musimy go stworzyc wspisujac <em> mkdir i nazwe folderu jaki chcemy utworzyc</em></p>
<p> Wchodzimy do tego katalogu<em>cd powtorka_p</em></p>
<p> Nastepnym krokiem jest utworzeniee dokumentu tekstowego w katalogu <strong>powtorka_p</strong> poprzez wpisanie<em> touch program1.c</em></p>
<p> Otwieramy utworzony dokument <em>nano program1.c</em>. Piszemy w nim program, zapisujemy go</p>
<p> Zapisany plik tekstowy z programem konwertujemy do postaci czytelnej dla maszyny wpisujac<em> gcc program1.c -o program1.o</em> Podczas przerabianie tego programu nastepuje analiza ewetualnych bledow w utworzonym programie</p>
<p> Jezeli program skonwertował sie bezblednie uruchamiam go wpisujac <em> ./program1.o</em> <strong> program1.o bo tak nazwalismy dokument tekstowy w ktorym jest program</strong></p>
<p> Jesli chcemy zobaczyc co jest w danym katalogu wpisujemy<em>ls</em></p>
<p> Wpisujac <em> cat program1.o</em> otwiera nam program lecz w sposob nie czytelny</p>
<p>
<p> Komenda <em>git init</em> instaluje nam program git o ile go nie ma</p>
<p><em> git status</em> Wyświetla co sie działo, stany na <strong> Czerwono</strong> - zmiany na komputerze <strong> Zielone</strong> - to na konsloli</p>
<p> Jezlei chemy dodac wszystkie zmiany to piszemy<em> git add .</em>, Jeżeli chcemy dodać konretna zmiane to piszemy <em> git add <strong>(+konkreta zmianę)</strong> </em></p>
<p> Komenda <em> git commit -m "dowolna nazwa" </em> zmienia repozytorium lokalne</p>
<p> <em> git log</em> - wyświetla cała historię zmian</p>
<p> Jesli chcemy wrzucic to na serwer na github.com wpisujemy <em>git remote add origin https://github.com/JacekK87/powt-rka-programu-1.git</em> a nastepnie
<em>  git push -u origin master</em>. Jeżeli juz raz to było robione to wpisujemy tylko <em>git push</em></p>
<p> Na serwer nie wrzucamy pliku z rozszerzeniem  .o , aby tak robiło potrzeba utworzenia pliku o nazwie <strong> .gitignore</strong><em> touch .gitignore</em>. Jest to plik ukryty do programu. Po jego utworzeniu otwieramy go <em> nano .gitignore</em> i wpisujemy <strong> Unikaj wszystkie pliki z rozszerzeniem .o</strong> a nastepnie od nowego akapitu <em>*.o</em></p> 
<p> Wpisujac <em> history</em> wyswietla nam to co bylo robione</p>
<p> <em> clear</em> wykonuje czyszczenie konsloli</p>
<p><em>	cd ..</em> nastepuje cofanie naszej aktualnej pozycji o jeden katalog</p>  
<p><em> histroy > readme.md </em> wysyla nasza cala historie do pliku z rozszerzeniem .md</p>
<p> <em> rm -rd i jakis plik </em> usuwa katalog o jekiejs tam nazwie</p>

<h2> Koniec </h2>
