<html>
<head>
<body>
1. OpenSSL �ٿ�ε� ����Ʈ : https://slproweb.com/products/Win32OpenSSL.html

lite�� OpenSSL Ŀ�ǵ常�� ����ϱ� ���� ��� ���Ǵ� Ÿ��

2. OpenSSL ��ġ

- Win32 OpenSSL : C:\OpenSSL-Win32
- Win64 OpenSSL : C:\OpenSSL-Win64

3. Visual Studio ���� ȯ�� ����

[������Ʈ] - [�Ӽ�]

- ���� : �����, ������
- �÷��� : x86, x64
������ �������ش�.

[�����Ӽ�] - [VC++ ���͸�]

(1) x86
- ���� ���͸� : C:\OpenSSL-Win32\include
- ���̺귯�� ���͸� : C:\OpenSSL-Win32\lib\VC
(2) x64
- ���� ���͸� : C:\OpenSSL-Win64\include
- ���̺귯�� ���͸� : C:\OpenSSL-Win64\lib\VC

��Ŀ �߰� ���Ӽ� ����

(1) x86
- Debug : libcrypto32MDd.lib;libcrypto32MTd.lib;libssl32MTd.liblibssl32MDd.lib;
- Release : libcrypto32MD.lib;;libcrypto32MT.lib;libssl32MT.lib;libssl32MD.lib; 
(2) x64
- Debug : libcrypto64MDd.lib;libcrypto64MTd.lib;libssl64MTd.liblibssl64MDd.lib;
- Release : libcrypto64MD.lib;;libcrypto64MT.lib;libssl64MT.lib;libssl64MD.lib; 
���� : openssl.lib;libssl.lib;libcrypto.lib;dasync.lib;capi.lib;ossltest.lib;padlock.lib;
--�߰� (1.1������ �Ⱥ���): applink.c �ҽ� ���� �߰�
[ no OPENSSL_Applink ] ==> �����޽��� �߻��ϸ�
include ���丮�� �ִ� "applink.c"�� �ҽ����Ͽ� �߰����ָ�˴ϴ�.


dll���� ��θ� ã�� ���ϴ� ���
</body>
</head>
</html>

c:\Windows\sysWOW64�� �����Ѵ�.