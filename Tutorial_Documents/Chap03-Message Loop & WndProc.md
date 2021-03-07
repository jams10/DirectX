## 기본적인 윈도우 애플리케이션 동작

![image](https://user-images.githubusercontent.com/52204522/108615977-84d7be00-744c-11eb-98d2-7975d410ad69.png)

##### 윈도우 애플리케이션은 Event Driven 방식. 사용자가 키보드를 입력하거나 마우스 버튼을 눌렀을 때 이벤트가 발생하게 되고 이를 이벤트 큐에 넣어 두었다가 프로그램이 이러한 이벤트 큐에서 이벤트에 대한 작업을 수행함.

## GetMessage

![image](https://user-images.githubusercontent.com/52204522/108616360-1d237200-7450-11eb-9d60-323109ca0f11.png)

##### * GetMessage()  : 새 메시지가 올 때까지 제어가 필요없음(양보) 
##### - 새 메시지가 올때까지 블록되므로 CPU를 사용하지 않음. 
##### -WM_QUIT이 아닌 메시지를 받으면 0이 아닌 값을 리턴, WM_QUIT 메시지 받으면 0, 에러의 경우 -1을 리턴함.
##### * PeekMessage() : 메시지를 얻어오고, 계속 제어를 원함. 
##### - 대기 상태가 없음. 
##### - 메시지 큐에서 메시지를 가져오지 않고도 메시지가 있는지 없는지 확인이 가능. 
##### - 메시지를 받으면 1, 아니면 0을 리턴함.

## WndProc

##### 윈도우를 닫아도 프로세스는 계속해서 돌아가는데, 이는 우리가 이전에 윈도우 클래스를 작성할 때 프로시져를 DefWindowProc 으로 기본 프로시져를 할당했기 때문임. 기본 프로시져는 우리가 윈도우를 닫건 윈도우 메시지를 닫건 어떤 행동을 할 지 모르기 때문에 직접 프로시져를 작성해 주어야 함.

![image](https://user-images.githubusercontent.com/52204522/108616804-4c3be280-7454-11eb-9252-a4197eb59d11.png)

##### 위와 같은 프로시져 작성하여 윈도우 클래스의 프로시져 값(lpfnWndProc)에 지정해줌.

![image](https://user-images.githubusercontent.com/52204522/108616754-d0419a80-7453-11eb-95d5-0c52891db1e5.png)

##### 위에서 알 수 있듯이, WM_QUIT은 wParam에 저장되는 것을 알 수 있다.

### 참고 자료

##### [GetMessage와 PeekMessage 설명](https://adolys.tistory.com/entry/PeekMessage-GetMessage-TranslateMessage-DispatchMessage)
