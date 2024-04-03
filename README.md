# Calculator
BigInt는 C++로 작성된 프로젝트로, 매우 큰 정수의 합과 차를 다루기 위한 기능을 제공합니다.   
크기가 매우 큰 양수 뿐만 아니라, 0과 음수의 범위에서의 계산을 지원합니다.   
이 프로젝트에는 main.cpp, sum2.cpp, min2.cpp, util.cpp 네 개의 파일이 포함되어 있습니다.   

## 파일 구성
### main.cpp
* main(): 사용자 입력을 받고, 사칙연산을 수행합니다.
### sum2.cpp
* sum2(int, int): 두 정수의 합을 반환힙니다.
### min2.cpp
* min2(int, int): 두 정수의 차를 반환힙니다.
### mul2.cpp
* mul2(int, int): 두 정수의 곱을 반환힙니다.
### div2.cpp
* div2(int, int): 두 정수의 나눗셈의 값을 반환힙니다.

## 실행 방법
프로젝트를 다운로드하고 소스 코드를 가져옵니다.   
컴파일러가 C++11 이상을 지원하는지 확인합니다.

```
git clone https://github.com/leebarang/cpp-week1 calculator
cd calculator

g++ -Werror -c main.cpp sum2.cpp sub2.cpp mul2.cpp div2.cpp
g++ -o main.exe main.o sum2.o sub2.o mul2.o div2.o
./main.exe
```

## 실행 예시
A: 5   
B: 2   
5 + 2 = 7   
5 - 2 = 3   
5 * 2 = 10   
5 / 2 = 2   


## 주의사항
입력값의 최댓값은 int size 입니다.
