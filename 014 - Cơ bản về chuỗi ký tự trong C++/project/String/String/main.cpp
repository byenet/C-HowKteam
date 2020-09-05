#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {


	/* Khai bao mot chuoi ky tu */
	std::string strString;

	/* Khoi tao mot chuoi theo nhieu cach */
	string strString0("");                 // Khoi tao chuoi strString0 rong
	string strString1("Kteam");            // Khoi tao chuoi "Kteam" cho strString1
	string strString2{ "Free Education!" }; // Khoi tao chuoi "Kteam" cho strString2
	string strString3 = "HowKteam.com";    // Khoi tao chuoi "HowKteam.com" cho strString3
	string strString4 = strString1;         // Gan gia tri chuoi strString1 cho strString4

											/* Khoi tao mot chuoi so */
	string strNumber = "88";         // Khoi tao chuoi "88" cho strNumber, khong phai so

	cout << "Enter your full name: ";
	string strName;
	cin >> strName;

	cout << "Enter your age: ";
	string strAge;
	cin >> strAge;

	cout << "Your name is " << strName << endl;
	cout << "Your age is " << strAge << endl;

	cout << "Enter your age: ";
	int nAge2;
	cin >> nAge2;

	// Xoa khoi bo no dem 32767 ky tu, hoac den khi gap ky tu '\n'
	std::cin.ignore(32767, '\n');

	cout << "Enter your name: ";
	string strName2;
	getline(cin, strName2);

	cout << "Hello, " << strName2 << endl;
	cout << "Your age " << nAge2 << endl;


	cout << "Enter your text: ";
	string strText;
	getline(cin, strText, '_');

	cout << "Your text: " << endl;
	cout << strText << endl;


	cout << setfill('-') << setw(120) << "-" << endl;
	//Dung truc tiep
	string str2 = "chuong trinh vui";
	string str("Day la chuong trinh code chuoi basic");
	cout << str2 << endl;
	cout << str << endl;
	cout << setw(120) << "-";



	if (1)
		//qua getline
	{
		string name, age;
		cout << "Moi ban nhap vao ten: " << endl;
		getline(cin, name);
		cout << "Moi ban nhap vao tuoi: " << endl;
		getline(cin, age);
		cout << "ten cua ban la: " << name << endl;
		cout << "Tuoi cua ban la: " << age << endl << endl;
		cout << setw(120) << "-" << endl;

	}

	if (0)
		// getline ket hop voi cin
	{
		/*Chúng ta có th? s? d?ng d?i tu?ng cin d? nh?p d? li?u vào
		t? bàn phím cho nh?ng d?i tu?ng c?a l?p string.
		V?i cách nh?p d? li?u này, chúng ta l?i g?p ph?i tru?ng h?p d? li?u
		truy?n vào string b? d?ng khi g?p kí t? kho?ng tr?ng.*/
		string name2, age2;
		cout << "moi ban nhap tuoi 2: ";
		cin >> age2;
		//Xoa khoi bo nho dem 32767 ky tu, hoac den khi gap ky tu '\n'
		//xoa khoang trang
		std::cin.ignore(32767, '\n');
		/*Nhung trong m?t s? tru?ng h?p, chúng ta c?n string nh?n vào kí t? kho?ng tr?ng,
		ví d? khi nh?p h? tên d?y d?, thì chúng ta c?n có m?t cách khác.
		Ð? kh?c ph?c tru?ng h?p string không nh?n kí t? kho?ng tr?ng,
		chúng ta s? d?ng hàm getline du?c d?nh nghia bên trong thu vi?n string.*/
		cout << "moi ban nhap ten 2: ";
		getline(cin, name2);
		cout << "Ten 2 cua ban la: " << name2 << endl;
		cout << "Tuoi 2 cua ban la: " << age2 << endl;
		cout << setw(120) << "-" << endl;
	}

	if (0)
		// dau ket thuc cua getline nhap duoc chuoi nhieu dong:
	{
		string name3, age3;
		cout << "Moi ban nhap vao ten 3:(chuoi se ket thuc khi gap dau '.'): " << endl;
		getline(cin, name3, '.');
		cin.ignore(32767, '\n');
		cout << "Moi ban nhap vao tuoi: (chuoi se ket thuc khi gap dau '.'): " << endl;
		getline(cin, age3, '.');
		cout << "ten 3 cua ban la: " << name3 << endl;
		cout << "tuoi 3 cua ban la: " << age3 << endl;
		cout << setw(120) << "-" << endl;

		// mot so thao tac co ban voi chuoi:

		// Tinh do dai chuoi vua nhap tren:

		cout << "do dai name 3 la: " << name3.length() << " ky tu" << endl;
		cout << "do dai tuoi 3 la: " << age3.length() << " ky tu" << endl;
		// cout << "do dai tuoi 3 la: " << age3.size() << " ky tu" << endl;
	}

	if (0)
		//thuc hien noi chuoi 
	{
		// noi chuoi bang toan tu
		cout << setw(120) << "-" << endl;
		cout << "doan chuong trinh sau se thuc hien noi chuoi: " << endl;
		string name4, ho4;
		cout << "Moi ban nhap vao ho (se ket thuc khi gap dau '.'): " << endl;
		getline(cin, ho4, '.');
		std::cin.ignore(32767, '\n');
		cout << "Moi ban nhap vao ten (se ket thuc khi gap dau '.'): " << endl;
		getline(cin, name4, '.');
		std::cin.ignore(32767, '\n');
		string hoten;
		hoten = ho4 + " " + name4;
		cout << " Ho ten cua ban sau khi dien la: " << hoten;
		cout << endl << setw(120) << "-" << endl;
		/* Ngoài ra Các b?n có th? truy?n vào phuong th?c append m?t
		d?i tu?ng có ki?u string ho?c tên c?a m?t m?ng kí t? nào dó.*/
		hoten.append(" qua");
		hoten.append(" ");
		hoten.append("Dep");
		hoten.append(" Trai");
		cout << "Ho ten cua ban duoc danh gia la: " << hoten << endl;
	}


	if (0)
		// kiem tra string co empty khong??? clear it...
	{
		cout << setw(120) << "-" << endl;
		string empty_str;
		cout << "Nhap vao mot string va kiem tra xem mang do co rong khong (dien vao dau . de test): " << endl;
		getline(cin, empty_str, '.');
		if (empty_str.empty())
		{
			cout << " string nay rong :))" << endl;
		}
		else
		{
			cout << " string nay chua rong " << endl;
			cout << " gio minh se dung ham clear de bien string nay thanh rong:))" << endl;
		}
		// clear string 
		empty_str.clear();
		if (empty_str.empty())
		{
			cout << endl << " string nay da rong sau khi clear:))" << endl;
		}
	}

	if (0)
		// truy xuat string...
	{
		/*Trong khi chúng ta c?n ph?i nh? r?t nhi?u th? trong ngôn ng? l?p trình C++,
		chúng ta bây gi? còn ph?i nh? c? kích thu?c c?a t?ng ki?u d? li?u s? nguyên
		khi chúng du?c d?nh nghia v?i nh?ng cái tên hoàn toàn khác nhau (short, int, long, …).
		//Name		//Type				//Range
		int8_t 		1 byte signed		-128 to 127
		uint8_t		1 byte unsigned		0 to 255
		int16_t		2 bytes signed		-32768 to 32767
		uint16_t	2 bytes unsigned	0 to 65535
		int32_t		4 bytes signed		-2147483648 to 2147483647
		uint32_t	4 bytes unsigned	0 to 4294967295
		int64_t		8 bytes signed		-9223372036854775808 to 9223372036854775807
		uint64_t	8 bytes unsigned	0 to 18446744073709551615
		*/
		/*Truy c?p ph?n t? trong string
		Cung tuong t? nhu vi?c truy c?p ph?n t? trong m?ng kí t?,
		chúng ta s? d?ng c?p d?u ngo?c vuông và truy?n vào m?t giá tr?
		s? nguyên d?i di?n cho ch? s? c?a ph?n t? c?n truy xu?t. */
		cout << setw(120) << "-" << endl;
		string str;
		int index;
		cout << " Moi ban nhap vao chuoi de test: " << endl;
		getline(cin, str, '.');
		for (int32_t index = 0; index <= str.length() - 1; index++)
		{
			cout << str[index] << " " << endl;
		}
		for (int32_t index = 0; index <= str.length() - 1; index++)
		{
			cout << str.at(index) << " " << endl;
		}
		// in ra phan tu dau va cuoi cua chuoi:
		cout << "First: " << str.front() << endl;
		cout << "Last: " << str.back() << endl;
	}


	if (0)
	{
		cout << setw(120) << "-" << endl;
		//N?i thêm 1 kí t? vào sau string: Chúng ta ch? c?n truy?n vào phuong th?c push_back 
		string str = "A sentence must end with a dot";
		str.push_back('.');
		cout << str << endl;

		//Xóa ph?n t? cu?i cùng c?a string:  phuong th?c pop_back xóa di kí t? cu?i cùng trong string. 
		string strin = "The dot will be removed.";
		if (!str.empty())
			str.pop_back();
		cout << str << endl;
	}

	if (0)
	{
		cout << setw(120) << "-" << endl;
		/*Chèn m?t string vào v? trí b?t kì trong string :
		Phuong th?c insert có th? giúp chúng ta chèn m?t string vào v? trí pos.
		string& insert(size_t pos, const string& str);*/
		string str = " how to use ";
		string str2 = " I will introduce you ";

		cout << str << endl;

		str.insert(0, str2);
		cout << str << endl;

		str.insert(str.length() - 1, " string in C++");
		cout << str << endl;

	}

	if (0)
	{

		cout << setw(120) << "-" << endl;
		/*Phuong th?c replace dùng d? thay th? m?t do?n con c?a chu?i kí t? luu
		trong standard container b?ng 1 string ho?c 1 m?ng kí t? khác.
		string& replace (size_t pos,  size_t len,  const string& str);
		string& replace (size_t pos,  size_t len,  const char* s);
		? trên dây là 2 cách mà chúng ta thu?ng dùng. Trong dó, pos là v? trí trong standard
		container mà b?n mu?n th?c hi?n thay th?, len là s? lu?ng kí t? trong standard container
		mà b?n mu?n thay, str là do?n kí t? m?i du?c ghép vào trong standard container.*/
		string str = "this string will be replaced";
		cout << str << endl;

		str.replace(20, 8, "changed");
		cout << str << endl;
	}

	if (0)
	{
		/*Yêu c?u nh?p vào m?t cái tên t? bàn phím và xác d?nh xem tên dó có t?n t?i trong danh sách trên hay không.
		Sau dây là m?t s? khai báo phuong th?c find trong l?p string s? giúp các b?n gi?i quy?t v?n d?
		size_t find(const string& str, size_t pos = 0) const;
		Tìm ki?m s? xu?t hi?n c?a chu?i con str bên trong standard container c?a d?i tu?ng mà các b?n
		dùng d? g?i phuong th?c find, v? trí b?t d?u tìm ki?m m?c d?nh là 0.*/
		string name_list;
		cout << "Enter a name list(end '.'): " << endl;
		getline(cin, name_list, '.');
		string name;
		cin.ignore(32767, '\n');
		cout << "Enter a name: ";
		getline(cin, name);
		int32_t serch_index = name_list.find(name);
		if (serch_index == -1)
		{
			cout << name << " is not exits in name list" << endl;
		}
		else
		{
			cout << "Found at: " << serch_index << endl;
		}
	}

	if (0)
	{
		/*So sánh 2 string
		Phép so sánh 2 string cung du?c th?c hi?n theo th? t? t? di?n(t? trái sang ph?i) gi?ng nhu khi so sánh hai m?ng kí t?.
		int compare(const string& str) const;
		Ho?c
		int compare(const char* s) const;
		Phuong th?c so sánh compare tr? v? m?t giá tr? s? nguyên.Tuong t? nhu so sánh 2 m?ng kí t? b?ng hàm strcmp, giá tr? tr? v? s? là 1 trong 3 tru?ng h?p :
		(so sanh theo ma ascii ky tu dau tien khac nhau cua hai string):
		Giá tr? tr? v? là 0 :
		Ði?u này có nghia n?i dung c?a hai chu?i kí t? này hoàn toàn gi?ng nhau
		Giá tr? tr? v? nh? hon 0 :
		Ði?u này có nghia t?i v? trí phát hi?n c?p kí t? không tuong x?ng gi?a str1 và str2 t?m g?i là v? trí
		index_not_match, ta có :
		str1[index_not_match] < str[index_not_match]
		Giá tr? tr? v? l?n hon 0 :
		Ngu?c l?i v?i vi?c giá tr? tr? v? nh? hon 0. Mình l?y l?i ví d? trên :
		*/
		string str1;
		string str2;
		cout << "Nhap vao string 1: ";
		getline(cin, str1, '.');
		cin.ignore(32767, '\n');
		cout << "Nhap vao string 2: ";
		getline(cin, str2, '.');
		if (str1.compare(str2) == 0) {
			cout << "str1 and str2 are equal (compare = 0)" << endl;
		}
		else if (str1.compare(str2) < 0)
		{
			cout << "str1 ans str2 are not equal (compare < 0)" << endl;
		}
		else
		{
			cout << "str1 ans str2 are not equal (compare > 0)" << endl;
		}

		/*M?t cách s? d?ng khác c?a phuong th?c compare :
		int compare(size_t pos, size_t len, const string& str) const;*/
		string my_string = "Make a comparison";
		int comparison = my_string.compare(7, 10, "comparison");
		cout << "Result of the comparison: " << comparison << endl;
		/*Ð?i s? pos du?c mình gán giá tr? 7, d?i di?n cho v? trí b?t d?u so sánh.T?i
		v? trí có ch? s? 7, mình l?y ra 10 kí t? liên ti?p nhau d? l?n lu?t so sánh v?i chu?i
		“comparison” du?c mình truy?n vào ? d?i s? th? 3 trong phuong th?c compare.*/
	}

	// còn ki?u ký t? char s? tìm hi?u sau:))

	// mot so kien thuc bo sung

	//cout << setw(5) << left << "ID";		// d? r?ng 5 ký t?, canh trái ID
	//cout << setw(30) << left << "Name";	// d? r?ng 30 ký t?, canh trái Name
	//cout << setw(20) << right << "Address" << endl;	// d? r?ng 20 ký t?, canh ph?i Address

	//Các toán t? std::dec(th?p phân), std::oct(bát phân), std::hex(th?p l?c phân) quy 
	//d?nh s? nguyên khi nh?p xu?t theo d?ng th?p phân, bát phân, hay th?p l?c phân.
	/*	int n;
	cout << "Enter n (hexadecimal): ";
	cin >> hex >> n;	// nh?p s? th?p l?c phân (h? 16)

	cout << "Octal: " << oct << n << endl;	// xu?t s? bát phân (h? 8)
	cout << "Decimal: " << dec << n << endl;	// xu?t s? th?p phân (h? 10)
	*/

	system("Pause");
	return 0;
}