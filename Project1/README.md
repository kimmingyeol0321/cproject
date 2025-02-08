# cproject
 2025.02.08~2025.03.15

## 목차
[깃허브 데스크톱](#깃허브-데스크톱) <br>
[코드 기본 구성](#코드-기본-구성) <br>
[printf](#printf) <br>
[서식 지정자](#서식-지정자)
<hr/>

# 깃허브 데스크톱

+ 설치 방법
  >https://desktop.github.com/download/

<hr/>

# 코드 기본 구성
+ 전처리기
+ main

```c
#include <stdio.h>

int main()
{
  printf("c programming");
  return 0;
}
```

<hr/>

# printf
> stdio.h에서 제공해주는 c언어의 대표적인 문장 출력용 기능(함수)입니다.<br>
> 일반적으로는 printf("작성하고싶은문장");을 사용하여 작성합니다.

+ 예시)
```c
#include <stdio.h>

int main()
{
 printf("good day to study");
 return 0;
}
```

# 서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|





[목차로](#목차)
