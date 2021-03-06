// 1217.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
	int a = 1, b = 2, c = 3, d = 4, e = 2100000000;
	//쓰레기 값이 들어가는 것을 방지해 변수 초기화
	//int -> %d, short -> %s, long -> %ld
	float fa = 1.1, fb = 2.53, fc = 3.53, fd = 4.3219, fe = -14.4214;
	//float -> %f, double -> %lf
	printf("%d %d %d %d %d\n", a, b, c, d, e);
	printf("%.2f %.2f %.2f %.4f %.4f \n", fa, fb, fc, fd, fe);

	int korean = 70, english = 80, math = 90;
	int _total = 240;
	float _average = 84.5;
	char _grade = 'B';

	printf("국어 : %d\n영어 : %d\n수학 : %d\n", korean, english, math);
	printf("합계 : %d\n", _total);
	printf("평균 : %.2f\n", _average);
	printf("학점 : %c\n", _grade);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
