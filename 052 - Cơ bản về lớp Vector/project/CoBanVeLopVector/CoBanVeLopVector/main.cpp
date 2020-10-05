#include <iostream>
#include <vector>
using namespace std;

void printStack(const vector<int> &stack)
{
	for (const auto &element : stack)
		cout << element << ' ';
	cout << "(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}

int main(){

	vector<int> array;
	vector<int> array2 = { 9, 7, 5, 3, 1 };
	vector<int> array3{ 9, 7, 5, 3, 1 };

	array2[1] = 5; // khong kiem tra pham vi mang
	array2.at(1) = 5; // co kiem tra pham vi mang

	//-----------------------------------------
	//Xem kich thuoc cua mang kieu std::vector
	vector<int> arr4 = { 2, 5, 8, 3, 1 };
	cout << arr4.size() << endl;

	//---------------------------------------
	// Thay doi kich thuoc mang kieu vector
	vector<int> array5{ 2, 5, 8, 3, 1 }; // mang 5 phan tu
	array5.resize(10); // thay doi do dai mang thanh 10 phan tu

	cout << "Do dai mang: " << array5.size() << '\n';

	for (auto const &item : array5)
		cout << item << ' ';

	//------------------------------------------------
	// Dung luong va kich thuoc cua vector
	// Kich thuoc(size) tra ve so luong phan tu dang duoc su dung trong mang.
	// Dung luong(capacity) tra ve so luong phan tu duoc cap phat cho vector trong bo nho.

	vector<int> array6;
	array6 = { 0, 1, 2, 3, 4 }; // length = 5, cap = 5
	cout << "length: " << array6.size() << "  capacity: " << array6.capacity() << '\n';

	array6 = { 9, 8, 7 }; // length = 3, cap = 5
	cout << "length: " << array6.size() << "  capacity: " << array6.capacity() << '\n';
	
	// Chung ta co the cap phat mot dung luong (capacity) ban dau cho std::vector bang ham reserve():
	vector<int> array7;
	array7.reserve(5); // dat dung luong vector la 5
	cout << "length: " << array7.size() << "  capacity: " << array7.capacity() << '\n';

	//------------------------------------------------------
	// Hanh vi ngan xep tren vector 

	/*push_back() them mot phan tu vao cuoi vector.
	* back() tra ve gia tri cua phan tu cuoi vector.
	* pop_back() xoa mot phan tu cuoi vector.*/

	vector<int> stack;

	stack.push_back(5); // push_back() them mot phan tu vao cuoi vector
	printStack(stack);

	stack.push_back(3);
	printStack(stack);

	stack.push_back(2);
	printStack(stack);

	// back() tra ve gia tri cua phan tu cuoi
	cout << "Phan tu cuoi: " << stack.back() << '\n';

	stack.pop_back(); // pop_back() xoa mot phan tu cuoi vector
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	system("Pause");
	return 0;
}