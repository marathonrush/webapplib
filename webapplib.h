/** \mainpage Web Application Library
 *
 * WebAppLib��һϵ����Ҫ������Unix����ϵͳ������WEB������C++��⡣ ���Ŀ����ͨ���ṩʹ�ü򵥷��㡢��Զ�����C++��ͺ�������CGI���򿪷������еĳ�����������߿���Ч�ʣ�����ϵͳά����Ľ����Ѷȣ��������е����Ϲ�ģWEBϵͳ����<br><br>
 *
 * WebAppLib���е��ࡢ������������������webapp�����ռ��ڣ������²�����ɣ�<br>
 * <b>String</b> : �̳в�������std::string���ַ����࣬�����˿����г��õ��ַ�����������<br>
 * <b>Cgi</b> : ֧���ļ��ϴ���CGI������ȡ�ࣻ<br>
 * <b>Cookie</b> : HTTP Cookie�������ȡ�ࣻ<br>
 * <b>MysqlClient</b> : MySQL���ݿ������࣬MySQL���Ӵ���C�����ӿڵ�C++��װ��<br>
 * <b>MysqlData</b> : MySQL��ѯ������ݼ��࣬MySQL��ѯ���������ȡC�����ӿڵ�C++��װ��<br>
 * <b>Template</b> : ֧����ģ����Ƕ��������ת��ѭ������ű��� HTML ģ���ࣻ<br>
 * <b>HttpClient</b> : HTTP/1.1ͨ��Э��ͻ����ࣻ<br>
 * <b>DateTime</b> : ����ʱ�����㡢��ʽ������ࣻ<br>
 * <b>TextFile</b> : �̶��ָ����ı��ļ���ȡ�����ࣻ<br>
 * <b>ConfigFile</b> : INI��ʽ�����ļ������ࣻ<br>
 * <b>FileSystem</b> : �ļ�ϵͳ���������⣻<br>
 * <b>Encode</b> : �ַ���������뺯���⣻<br>
 * <b>Utility</b> : ϵͳ�����빤�ߺ�����<br>
 * �����ϸʹ��˵���ɲμ����ο��ֲ� help.chm<br>
 *
 * ���뱾���Ҫ��ʹ��g++���������汾������v3.4.0��Ŀǰ֧�ֵĲ���ϵͳ��Linux(CentOS v4.0���ϰ汾)��Solaris(v10���ϰ汾)��������ͨ��Cygwin����������Windows����ϵͳ<br>
 *
 * <center>
 * <a href="readme.html">Readme</a><br>
 * pilot.cn@gmail.com
 */

/// \file webapplib.h
/// ������ͷ�ļ�����

#ifndef _WEBAPPLIB_H_
#define _WEBAPPLIB_H_ 

#include "waString.h"
#include "waCgi.h"
#include "waDateTime.h"
#include "waTemplate.h"
#include "waHttpClient.h"
#include "waEncode.h"
#include "waFileSystem.h"
#include "waUtility.h"
#include "waTextFile.h"
#include "waConfigFile.h"

//#include "waTool.h"

// ����ʱʹ�� -D_WEBAPPLIB_NOMYSQL �����򲻰��� MysqlCleint ģ��
#ifndef _WEBAPPLIB_NOMYSQL
#include "waMysqlClient.h"
#endif

#endif //_WEBAPPLIB_H_ 

