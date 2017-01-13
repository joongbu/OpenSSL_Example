<html>
<head>
<body>
1. OpenSSL 다운로드 사이트 : https://slproweb.com/products/Win32OpenSSL.html

lite는 OpenSSL 커맨드만을 사용하기 원할 경우 사용되는 타입

2. OpenSSL 설치

- Win32 OpenSSL : C:\OpenSSL-Win32
- Win64 OpenSSL : C:\OpenSSL-Win64

3. Visual Studio 빌드 환경 설정

[프로젝트] - [속성]

- 구성 : 디버그, 릴리즈
- 플랫폼 : x86, x64
적절히 선택해준다.

[구성속성] - [VC++ 디렉터리]

(1) x86
- 포함 디렉터리 : C:\OpenSSL-Win32\include
- 라이브러리 디렉터리 : C:\OpenSSL-Win32\lib\VC
(2) x64
- 포함 디렉터리 : C:\OpenSSL-Win64\include
- 라이브러리 디렉터리 : C:\OpenSSL-Win64\lib\VC

링커 추가 종속성 설정

(1) x86
- Debug : libcrypto32MDd.lib;libcrypto32MTd.lib;libssl32MTd.liblibssl32MDd.lib;
- Release : libcrypto32MD.lib;;libcrypto32MT.lib;libssl32MT.lib;libssl32MD.lib; 
(2) x64
- Debug : libcrypto64MDd.lib;libcrypto64MTd.lib;libssl64MTd.liblibssl64MDd.lib;
- Release : libcrypto64MD.lib;;libcrypto64MT.lib;libssl64MT.lib;libssl64MD.lib; 
공통 : openssl.lib;libssl.lib;libcrypto.lib;dasync.lib;capi.lib;ossltest.lib;padlock.lib;
--추가 (1.1에서는 안보임): applink.c 소스 파일 추가
[ no OPENSSL_Applink ] ==> 에러메시지 발생하면
include 디렉토리에 있는 "applink.c"를 소스파일에 추가해주면됩니다.


dll파일 경로를 찾지 못하는 경우
</body>
</head>
</html>

c:\Windows\sysWOW64에 복사한다.