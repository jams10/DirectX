## WM_CHAR

![image](https://user-images.githubusercontent.com/52204522/110230722-2cc5af00-7f56-11eb-8c1a-b0905cc373aa.png)

## WM_LBUTTONDOWN

##### 마우스 왼쪽 버튼 눌렸을 때 발생하는 이벤트.

![image](https://user-images.githubusercontent.com/52204522/110230888-74990600-7f57-11eb-8fdd-7b60c7fd56bc.png)

##### 위 문서에서 알 수 있듯이, wParam에는 마우스 눌림 혹은 조합기 눌림의 상태를 나타내고, lParam에는 커서의 좌표가 저장되는데 이 때 하위 워드에 x좌표, 상위 워드에 y 좌표가 기록되며 좌측 상단 원점인 클라이언트 영역 기준의 좌표이다.
##### x,y좌표를 얻어오기 위해서 pt.x = GET_X_LPARAM(lParam) 와 pt.y = GET_Y_LPARAM(lParam)으로 얻어오거나 아래와 같이 MAKEPOINTS 매크로를 이용해 POINTS 구조체에 저장할 수 있다.

![image](https://user-images.githubusercontent.com/52204522/110230988-3a7c3400-7f58-11eb-9b00-6e6fb40a02ed.png)
