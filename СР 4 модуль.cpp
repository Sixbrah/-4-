#include <iostream>
#include <vector>
using namespace std;
vector<int> function(vector<int>vec, int n) {
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		*i += n;
	}
	return vec;
}
int main() {

}
// #include "pch.h"
// #include "C:\Users\timof\source\repos\ConsoleApplication4\ConsoleApplication4.cpp"
// #include <vector>
// using namespace std;
// vector<int> test_vec = { 3,4,5 };
// TEST(TestCaseName, TestBool) {
// 	ASSERT_EQ(test_vec, function({ 1,2,3 }, 2));
// }
// Как добавить в репозиторий тест я не понял, поэтому прикрепил как комментарий