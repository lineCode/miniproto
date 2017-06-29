#ifndef __StringTool_h__
#define __StringTool_h__

#include <string>
#include <vector>

namespace common{
	namespace tool{

		class StringTool
		{
		public:
			// �ַ�������ĸ��д
			static std::string UpcaseFirstChar(const std::string& str);

			// �ַ���ȫ��ĸ��/Сд
			static std::string UpperCase(const std::string& str);
			static std::string LowerCase(const std::string& str);

			// ȥ���ַ���str�е������Ʊ����' '��'\t'��'\r'��'\n'
			static std::string TrimAll(const std::string& str);

			// ���ַ���str�����е��ַ���src�滻���ַ���des
			static std::string ReplaceAll(const std::string& str, const std::string& src, const std::string& des);
			// ���ַ���str�����з���src��ʽ��������ʽ�����ַ����滻���ַ���des
			static std::string ReplaceReg(const std::string& str, const std::string& src, const std::string& des);

			// ���ַ�����ָ���ָ������зָ���طָ��������б�
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<std::string>& values);
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<unsigned int>& values);
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<int>& values);
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<float>& values);

			// �ж��ַ����Ƿ���һ���Ϸ�������
			static bool IsUInt(const std::string& str);
			static bool IsInt(const std::string& str);
			static bool IsFloat(const std::string& str);

			// ����һ���ַ����Ƿ��ǺϷ���utf8����
			static bool IsUtf8(const std::string& str);

			// Gbk��Utf8��ת������ת������ַ���
			static std::string GbkToUtf8(const std::string& gbk);
			static std::string Utf8ToGbk(const std::string& utf8);

			// Unicode��Utf8��ת������ת������ַ���
			static void UnicodeToUtf8(std::string& utf8, const std::wstring& unicode);
			static void Utf8ToUnicode(std::wstring& unicode, const std::string& utf8);

			// �����ֽڻ�ת
#ifdef UNICODE
			static std::wstring MbStrToWcStr(const std::string& mbs, const wchar_t* language);
			static std::string WcStrToMbStr(const std::wstring& wcs, const wchar_t* language);
#else
			static std::wstring MbStrToWcStr(const std::string& mbs, const char* language);
			static std::string WcStrToMbStr(const std::wstring& wcs, const char* language);
#endif

		private:
			// Unicode��Utf8��ת����ȡת������ַ���
			static size_t UnicodeToUtf8Length(const std::wstring& unicode);
			static size_t Utf8ToUnicodeLength(const std::string& utf8);
		};

	}
}

#endif