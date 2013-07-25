#ifndef _UTILS_H_
#define _UTILS_H_
#include <string>

typedef unsigned char uint8;
typedef unsigned short uint16;

//��UnicodeС��תΪUTF8����Ҫ�����������
std::string UCS2ToUTF8(const std::string& src);
int UTF8ToUCS2(const uint8 *utf8Str, uint16 *ucs2Buf, int ucs2MaxLen);
std::string WStrToUTF8(const std::wstring& str);

//��ȡ�߽磬���ڵ����곬����Ļ��߽�����ұ߽�ʱ�Զ�����߽�ֵ��
//�ǵĶ�����ʾ���ᳬ����Ļ
float getBound(float x,float offset,float min,float max);


#endif