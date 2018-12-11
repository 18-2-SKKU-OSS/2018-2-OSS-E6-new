# 2048.cpp

[![Build Status](https://img.shields.io/travis/plibither8/2048.cpp.svg)](https://travis-ci.com/plibither8/2048.cpp)
[![Build status](https://ci.appveyor.com/api/projects/status/sljhlvcx8k11ckw7?svg=true)](https://ci.appveyor.com/project/plibither8/2048-cpp)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/b37414d66e7d4146bf72a4a467fdc84d)](https://app.codacy.com/app/plibither8/2048.cpp?utm_source=github.com&utm_medium=referral&utm_content=plibither8/2048.cpp&utm_campaign=Badge_Grade_Dashboard)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/plibither8/2048.cpp.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/plibither8/2048.cpp/context:cpp)
[![Made with Love in India](https://madewithlove.org.in/badge.svg)](https://madewithlove.org.in/)

> C++ 로 구현된 게임 "2048"의 터미널 버전입니다.

<p align="center">
    <img align="center" alt="2048 in action!" src="assets/demo.gif"></img>
</p>

##2018-2-OSS-E6 팀 소개

```bash
윤혜진 / 2017311666 / yhjsoar / yhjsoar5@gmail.com
Roll : 조장, github page 생성, menu.cpp 한글화 및 한글 메뉴 생성, 게임 종료 후 뒤로가기 구현, 한글 스코어 오류 수정
이지환 / 2014312411 / hwan3526 / wlghks3526@naver.com
Roll : 스코어보드, 스코어보드 진입시 사이즈 입력, 게임 시작시 사이즈 입력 부분에서 메뉴로 돌아갈 수 있도록 코드 수정, game.cpp 한글화
윤재한 / 2017314561 / yjh1534 / dbswogks1534@naver.com
Roll : scores, statistics모든 사이즈 저장 관련 코드 수정, 메뉴얼.md 한글판 작성, scores.cpp 한글화, ReadMe.md 수정
이인수 / 2017314655 / Leeinsu1 / leeinsu123@naver.com
Roll : 이슈관리, 게임에러확인, 코드수정, cmake 메뉴얼작성, 발표준비
함수민 / 2017314317 / sumin8861 / sumin8861@hanmail.net
Roll : 이슈관리, 게임에러확인, 코드분석, 발표, 발표준비
```


## Setup

이 게임과 코드는 GNU/Linux 와 macOS 플랫폼에서 작동되도록 만들어졌지만, Windows에서의 호환성 또한 추가되었습니다.

### Requirements

* C++ 컴파일러 (예시: `g++`, `clang++`, 기타)
* 터미널 실행이 가능한 Linux, macOS 또는 Windows (windows의 경우 Cygwin, Linux를 위한 Windows subsystem 또는 Git bash를 추천합니다.)
* [CMake](https://cmake.org/)

### Installation

1. 터미널을 열고 설치를 원하는 디렉토리에 이 프로젝트를 클론합니다:
```bash
$ git clone https://github.com/plibither8/2048.cpp
```
2. 2048 디렉토리로 이동합니다:
```bash
$ cd 2048.cpp
```
3. 'Build' 디렉토리를 만들고 해당 디렉토리로 이동합니다:
```bash
$ mkdir build && cd build
```
4. 프로그램을 cmake로 컴파일 합니다:
```bash
$ cmake ..
```
5. 실행프로그램을 생성합니다:
```bash
$ make
```
6. 프로그램을 실행하고 게임을 즐겨주세요! :tada:
```bash
$ ./2048
```

## Game manual

1. 게임을 실행하면, 먼저 언어를 선택합니다. 1 은 영어, 2 는 한국어로 플레이 합니다.
해당 문서는 영어를 선택하였을 때를 기준으로 작성 하였습니다.

<img src="https://user-images.githubusercontent.com/29089484/49750559-98c0fa80-fcee-11e8-9d16-a0b70a810e3b.PNG">

2. 원하는 항목을 선택합니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750558-98286400-fcee-11e8-9d5d-591751e8b5dc.PNG">

3. Play a New Game
    -플레이 하고 싶은 게임보드의 크기를 입력하여, 새로운 게임을 플레이합니다. 0을 선택하면 메뉴로 돌아갑니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750315-e5f09c80-fced-11e8-8569-280111cbd763.PNG">

    -플레이 중인 화면은 다음과 같고, z 또는 p를 입력하면 현재 상태를 저장합니다. m을 입력하면 메뉴로 돌아갑니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750743-053bf980-fcef-11e8-9bf7-dd111375fd4e.PNG">

    -게임이 종료되면 이름을 입력하여 점수를 저장합니다.
4. Continue Previous Game
    -previousGame 파일이 없다면, 오류 문구를 출력하고 새로운 게임을 시작합니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750782-1c7ae700-fcef-11e8-89dc-9116957b6143.PNG">

    -이어서 할 경우 txt파일을 수정하여 점수를 올리거나 하는 행위를 할 수 있기에  이어서 했을 경우 점수를 저장하지 않습니다.
5. View Highscores and Statistics
    -보고 싶은 점수판의 게임보드 크기를 입력합니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750803-2bfa3000-fcef-11e8-862c-8dcd6e0659f6.PNG">

    -해당 사이즈의 기록을 확인할 수 있습니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750819-37e5f200-fcef-11e8-92ee-aec76c74a5d6.PNG">

    -해당 사이즈가 없을 경우, 저장된 데이터가 없다고 출력합니다.

<img  src="https://user-images.githubusercontent.com/29089484/49750858-521fd000-fcef-11e8-84bc-b9a116064531.PNG">
6. Exit
    -게임을 종료합니다.

## Notes

`[GameBoard].getTile(2,0)`: x = 0, y = 2 인 해당 예시는 두 번째 행의 0번째 타일(열)을 의미합니다.
다음과 같은 게임 보드에서 '@'로 표시된 타일 입니다.

> Note: '행' 과 '열' 은 0 부터 시작합니다.

```plaintext
┌──────┬──────┬──────┬──────┐
│      │      │      │      │
├──────┼──────┼──────┼──────┤
│      │      │      │      │
├──────┼──────┼──────┼──────┤
│   @  │      │      │      │
├──────┼──────┼──────┼──────┤
│      │      │      │      │
└──────┴──────┴──────┴──────┘
```

## License

Copyright (c) Mihir Chaturvedi. All rights reserved.

Licensed under the [MIT](LICENSE) License.
