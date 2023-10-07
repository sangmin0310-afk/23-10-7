//#include <iostream>
//
//int main(void) {
//	int num = 20;
//	std::cout << "Hello world!" << std::endl;
//	std::cout << "Hello" << "World!" << std::endl;
//	std::cout << num << ' ' << 'A';
//	std::cout << ' ' << 3.14 << std::endl;
//	int result = Add();
//	return 0;
//}
//
//int Add(void) {
//	int a = 10;
//	int b = 20;
//
//	return a + b;
//}

//#include <iostream>
//
//int main(void) {
//
//	int val1;
//	std::cout << "첫 번째 숫자입력: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두 번째 숫자입력: ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "덧셈결과: " << result << std::endl;
//	return 0;
//
//}


/*사용자로부터 총 5개의 정수를 입력 받아서, 그합을 출력하는 프로그램을 작성해 보자.
단, 프로그램의 실행은 다음과 같이 이뤄져야 한다.*/

//#include <iostream>
//
//int main(void)
//{
//	int num[5]; // 정수방 num []:배열 숫자 지정: 5
//	int data; // 입력값을 저장할 변수 라고 생각 
//	int reslut = 0; // 합계값 변수 
//
//	for (int i = 0; i < 5; i++) {   //for문을 사용해서 증감식을 사용 
//		std::cout << i+1 << "번째 정수입력: ";  // i증가 화면 출력 
//		std::cin >> data; // 입력값 저장 
//        
//		reslut += data;  // 합계 값을 저장 
//	}
//
//	std::cout << "합계: " << reslut << std::endl; // 합계 값 화면 출력 
//}

/*프로그램 사용자로부터 이름과 전화번호를 문자열 형태로 입력 받아서, 입력 받은 데이터를 
그대로 출력하는 */