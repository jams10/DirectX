## 윈도우 클래스 생성 및 등록

##### 윈도우 애플리케이션은 윈도우와 메시지로 이루어진다.

### 1. WinMain 
![image](https://user-images.githubusercontent.com/52204522/108588818-92cf0580-739e-11eb-97fc-254b6dd5f0f2.png)

### 2. WNDCLASSEX
![image](https://user-images.githubusercontent.com/52204522/108589661-c3b13980-73a2-11eb-8342-e1d6aed38b75.png)

#### > WIN API 함수의 A와 W, EX
##### 대부분의 WIN API 함수에는 ANSI(멀티바이트) 버전과 Unicode(와이드)버전이 있음. 이를 맨 끝에 A 혹은 W로 표현하는 것임. 이 두개가 안붙은 함수의 경우 전처리기 설정에 따라 A 또는 W 버전으로 결정됨. 따라서 CreateWindow를 참조하는 코드를 작성한 다음 하나의 #define 매크로 변경만으로 유니코드 혹은 ANSI를 선택적으로 대상 지정할 수 있음.
##### Ex 버전은 기존 기능의 확장 버전임. 원래의 기능에 작은 기능들을 추가한 것.

#### 위와 같이 WNDCLASSEX를 통해 윈도우 클래스를 생성하고 구조체의 각 변수(윈도우 클래스의 옵션)들을 설정한 뒤에, RegisterClassEx() 함수에 윈도우 클래스를 넘겨 등록한다.

## 윈도우 생성
### 3. CreateWindowExA
![image](https://user-images.githubusercontent.com/52204522/108590169-74b8d380-73a5-11eb-9901-f9a4b9db6d49.png)

## 윈도우 출력
### 4. ShowWindow
![image](https://user-images.githubusercontent.com/52204522/108590573-9b780980-73a7-11eb-8f78-eabf15cdb4f5.png)
