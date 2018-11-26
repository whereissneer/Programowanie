#include <iostream>
#include <conio.h>
//#include <math.h>
//1.1. Zadeklarować zmienne typu int, float, char. Przypisać do nich wartość, wyświetlić je na ekran.
void zadanie1_1() {
	int a = 1230;
	float pi = 3.14159265;
	char jeden = { 'R'};
	std::cout << a << std::endl << pi << std::endl << jeden;
}
//1.2. Wyświetlić zmienną typu int na ekran. Należy użyć metody printf i konstrukcji %d
void zadanie1_2() {
	int b = 2018;
	printf("%d", b);
}
//1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x
void zadanie1_3() {
	int x;
	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> x;
	std::cout << "Kwadrat tej liczby : "<<x*x;
}
//1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest
//ona: mniejsza, większa, czy równa 0
void zadanie1_4() {
	int x;
	std::cout << "Podaj liczbe !"<<std::endl;
	std::cin >> x;
	if (x > 0) {
		std::cout << "Podana liczba jest wieksza od 0";
	}
	else if (x == 0) {
		std::cout << "Podana liczba jest rowna 0";
	}
	else {
		std::cout << "Podana liczba jest mniejsza od 0";
	}
}
//1.5. Pobrać ud użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa
void zadanie1_5() {
	int a, b, c;
	std::cout << " Podaj trzy liczby "<<std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a > b && a > c) {
		std::cout << a << " jest najwieksze";
	}
	else if (b > a && b > c) {
		std::cout << b << " jest najwieksze";
	}
	else if (c > a && c > b) {
		std::cout << c << " jest najwieksze";
	}
	else if (a == b && a == c) {
		std::cout << "Liczb sa rowne !";
	}
}
/*1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie
0)*/
void zadanie1_6() {
	float a, b; 
	char c;
	std::cout << "#####################################################################################" << std::endl;
	std::cout << "##########################--Witaj w super kalkulatorze--#############################" << std::endl;
	std::cout << " Aby rozpoczac, podaj dwie liczby oraz znak operacji matematycznej" << std::endl;
	std::cout << " a: ";
	std::cin >> a;
	std::cout << " b: ";
	std::cin >> b;
	std::cout << " Dodawanie (+), Odejmowanie(-), Mnozenie(*), Dzielenie(/)*byle nie przez 0!*"<<std::endl;
	std::cout << " Wybor? ";
	std::cin >> c;
	if (c == '+') {
		std::cout << " Wybrales dodawanie! " << std::endl;
		std::cout << " Wynik: " << a + b;
	}
	else if (c == '-') {
		std::cout << " Wybrales odejmowanie! " << std::endl;
		std::cout << " Wynik: " << a - b;
	}
	else if (c == '*') {
		std::cout << " Wybrales mnozenie! " << std::endl;
		std::cout << " Wynik: " << a * b;
	}
	else if (c == '/' && b != 0) {
		std::cout << " Wybrales dzielenie! " << std::endl;
		std::cout << " Wynik: " << a / b;
	}

}
/*2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy. Pętla
wykonuje się zawsze, jeśli warunek jest prawdziwy (ewaluowany do true). Napisać pętlę, w któej użytkownik podaje liczbę x. Należy
wyświetlić tę liczbę. Jeżeli użytkownik poda 0, należy zakończyć program*/
void zadanie2_1() {
	float a=1;
	while (a != 0) {
		std::cout << "Podaj liczbe ! Jesli podasz 0 program zakonczy sie ";
		std::cin >> a;
	}
}
/*2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć
wszystko od początku. Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program.*/
void zadanie2_2() {
	bool y = 1;
	float a, b;
	char c;
	while (y == 1) {
		std::cout << "#####################################################################################" << std::endl;
		std::cout << "##########################--Witaj w super kalkulatorze--#############################" << std::endl;
		std::cout << " Aby rozpoczac, podaj dwie liczby oraz znak operacji matematycznej" << std::endl;
		std::cout << " a: ";
		std::cin >> a;
		std::cout << " b: ";
		std::cin >> b;
		std::cout << " Dodawanie (+), Odejmowanie(-), Mnozenie(*), Dzielenie(/)*byle nie przez 0!*" << std::endl;
		std::cout << " Wybor? ";
		std::cin >> c;
		if (c == '+') {
			std::cout << " Wybrales dodawanie! " << std::endl;
			std::cout << " Wynik: " << a + b;
		}
		else if (c == '-') {
			std::cout << " Wybrales odejmowanie! " << std::endl;
			std::cout << " Wynik: " << a - b;
		}
		else if (c == '*') {
			std::cout << " Wybrales mnozenie! " << std::endl;
			std::cout << " Wynik: " << a * b;
		}
		else if (c == '/' && b != 0) {
			std::cout << " Wybrales dzielenie! " << std::endl;
			std::cout << " Wynik: " << a / b;
		}
		std::cout << std::endl;
		std::cout << " Czy chcesz jeszcze raz skorzystac z naszych uslug? Podaj 1 jesli tak, 0 jesli nie";
		std::cin >> y;
	}
}
/*2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100
000.
*/
void zadanie2_3() {
	int a;
	int i = 0;
	std::cout << "Podaj liczbe ! ";
	std::cin >> a;
	int temp = a;
	while (a < 100000) {
		std::cout << a;
		a = a*a;
		i++;
		std::cout << std::endl;
	}
	std::cout << "Liczbe " << temp << " mozna bylo spotegowac " << i << " razy, teraz wynosi ona "<<a;
}
/*2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (w
nowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0*/
void zadanie2_4() {
	int a;
	std::cout << "Podaj liczbe !(najlepiej dodatnia) ";
	std::cin >> a;
	while (a >= 0) {
		std::cout << a;
		a--;
		std::cout << std::endl;
	}
}
/*2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną ilość razy. Uwaga - każdą pętlę
for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest
znana (zależy od użytkownika lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ,
czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. Następnie OPERACJI WYKONYWANEJ
PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1, czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry
od 0 do 9.
*/
void zadanie2_6() {
	int b = 0;
	for (int i = 0; i <= 9; i++) {
		std::cout<<b;
		b++;
	}
}
/*2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby
między x a y (do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli?)*/
void zadanie2_7() {
	int a, b;
	std::cout << "Podaj dwie liczby, zakladam ze druga jest wieksza !"<<std::endl;
	std::cin >> a;
	std::cin >> b;
	for (int i = 0; a <= b; i++) {
		std::cout<<a<<" ";
		a++;
	}
}
//2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0
void zadanie2_8() {
	int a;
	std::cout << "Podaj liczbe " << std::endl;
	std::cin >> a;
	for (int i = 0; a > 0; i++) {
		std::cout << a << " ";
		a--;
	}
}
/*2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli
liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.
*/
void zadanie2_9() {
	int a;
	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> a;
	for (int i = 0; a <= 100; i++) {
		if (i % 3 == 0) {
			std::cout << a <<" ";
		}
		a++;
	}
}
/*3.1. Napisać metodę void NewLine(). Powinna ona wypisać na ekran pojedynczą pustą linię. Użyć tej metodę w main().
*/
void NewLine() {
	std::cout << "";
}
/*3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, ile zostało podanych W PARAMETRZE count (należy
użyć pętli for). Użyć metodę w main()
*/
void NewLines(int count) {
	for (int i = 1; i <= count; i++) {
		std::cout << i << std::endl;
	}
}
/*3.3. Napisać metodę void WriteBiggerNumber(int x, int y). Metoda powinna pobrać 2 parametry i zwrócić większy z nich. Wykorzystać
funckję w metodzie main(). UWAGA - pobieranie liczb od użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji należy jedynie przesłać pobrane wcześniej parametry.*/
int WriteBiggerNumber(int x, int y) {
	if (x > y) {
		return x;
	}
	else if (y > x) {
		return y;
	}
}
/*3.4. Napisać metodę Multiply(int x, int y) . Metoda powinna ZWRÓCIĆ (słowo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
NIE POWINNA wypisywać wyniku - powinien on być wyświetlony w funkcji main!*/
int Multiply(int x, int y) {
	return x * y;
}
int main() {

	/*Zadanie 3_3
	int a, b;
	std::cout << "Podaj dwie liczby"<<std::endl;
	std::cin >> a;
	std::cin >> b;
	*/
	

	std::cout<<std::endl;
	
	_getch();
	return 0;
}