# CODING-TEST
코딩테스트 풀이용 프로젝트입니다. GoogleTest를 통해 테스트 케이스를 생성해서 관리할수 있도록합니다.  
흔히 코딩테스트 문제를 풀때 직접 input을 입력하고 결과를 확인하곤 하는데 이를 GoogleTest 라이브러리를 통해 입력과 출력을 코드로써 관리할수 있게합니다.                 



# 프로젝트 설치방법
  OS: Ubuntu-20.04
- ## 우분투에 컴파일러, 빌드툴 설치
  ```
  $ sudo apt-get update
  $ sudo apt-get install g++
  $ sudo apt-get install gcc
  $ sudo apt-get install gdb
  $ sudo apt-get install cmake
  ```
- ## GoogleTest lib에 추가하기
    먼저 다음과 같은 명령어로 프로젝트에 lib 폴더를 생성합니다.
    ```
    $ cd ${프로젝트 루트 폴더}
    $ mkdir -p lib/googletest
    ```
    mkdir의 p(parent)옵션은 상위 폴더가 없을때 이를 만들어주는 옵션입니다.  

    다음 명령어로 해당 폴더에 구글 테스트 레파지토리를 git clone명령어로 가져옵니다
    ```
    $ git clone https://github.com/google/googletest/ ./lib/googletest
    ```
    해당 명령어는 최신 googletest 레파지토리를 가져오기에 빌드가 안될수 있습니다.  
    따라서 해당 레파지토리 폴더로 이동하여 git checkout 명령어를 통해 안정적인 버전으로 변경해야합니다.
    ```
    $ cd lib/googletest
    $ git tag
    release-1.0.0
    ...
    release-1.11.0
    ...
    v1.10.x
    : (여기서 q 또는 esc를 누르면 터미널로 돌아옵니다.)
    $ git checkout tags/release-1.11.0
    HEAD is now at e2239ee6 Googletest export
    ```
    
    git log 명령어로 현재 버전을 확인합니다.

    ```
    $ git log --oneline
    e2239ee6 (HEAD, tag: release-1.11.0) Googletest export
    ...
    ```
    소괄호 안에 `tag:release-1.11.0`와 같이 출력된다면 정상적으로 googletest버전이 바뀌었음을 의미합니다.

    이로써 googletest 레파지토리를 라이브러리에 추가했습니다.

- ## VSCODE 에서 Cmake Extension을 사용해서 설정하기
    참고한 사이트: https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html
  - ### VSCODE Extension 설치해야하는 목록
    - CMake
    - CMake Tools
    - C/C++ Extension Pack
    - C++ TestMate
  - ### Compile 하기
    vscode 명령창 (ctrl + shift + p)에서 나오는 코드는 **>** 로 표시 하고 있습니다.
    ```
    > CMAKE: Configure
    > CMAKE: Build
    ```
    와 같은 명령어 순서로 입력합니다.

    해당 명령어는 참고한 사이트의 다음과 같은 코드와 비슷한 기능을 합니다.
    - #### CMAKE: Configure
        ```
        cd build
        cmake .. -DCMKAE_BUILD_TYPE=Debug -G "Unix Makefiles"
        ```
    - #### CMAKE: Build
        ```
        make all
        ```
  - ### make: *** No rule to make target 'ExampleProject'.  Stop.
    제목과 같이 에러가 날땐 vscode에서 [GCC ...] 옆에 [all]로 설정되어있는지 확인한다. 
    `/usr/bin/cmake --build /home/jongmo/proj/CODING-TEST/build --config Debug --target ExampleProject -j 6 --`와 같은 명령어에서 --target ExampleProject부분때문에 에러가 나는것이다.
  - ### 빌드 결과물 
    각각 `/build/src/ExampleProject_run`, `/build/test/Example_Project_test` 파일에서 결과를 확인할수 있습니다.
    추후 빌드 결과파일을 `/build/bin`폴더로 이동시킬 예정입니다.
    
