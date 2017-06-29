#ifndef __ProtoDefine_h__
#define __ProtoDefine_h__

#include <string>
#include <vector>
#include <set>
#include <map>

namespace common
{
	namespace miniproto
	{

		// typedefs
		typedef int int32;
		typedef unsigned int uint32;
		typedef long long int64;
		typedef unsigned long long uint64;

		// �ֽڣ��ֽ�����
		typedef unsigned char byte;
		typedef unsigned int byte_size;

		// ����ʧ��ʱ��throw UnknownWireTypeException
		const std::string UnknownWireTypeException = "UnknownWireTypeException";

		// string����
		template<template<typename> class A = std::allocator>
		using String = std::basic_string<char, std::char_traits<char>, A<char> >;

		// vector������vector�������ı���
		template<class T, template<typename> class A = std::allocator>
		using Array = std::vector<T, A<T> >;
		template<class T, template<typename> class A = std::allocator>
		using ArrayIt = typename Array<T, A>::iterator;
		template<class T, template<typename> class A = std::allocator>
		using ArrayConstIt = typename Array<T, A>::const_iterator;

		// set������set�������ı���
		template<class T, template<typename> class A = std::allocator>
		using Set = std::set<T, std::less<T>, A<T> >;
		template<class T, template<typename> class A = std::allocator>
		using SetIt = typename Set<T, A>::iterator;
		template<class T, template<typename> class A = std::allocator>
		using SetConstIt = typename Set<T, A>::const_iterator;

		// map������map�������ı���
		template<class K, class V, template<typename> class A = std::allocator>
		using Map = std::map<K, V, std::less<K>, A<std::pair<K, V> > >;
		template<class K, class V, template<typename> class A = std::allocator>
		using MapIt = typename Map<K, V, A>::iterator;
		template<class K, class V, template<typename> class A = std::allocator>
		using MapConstIt = typename Map<K, V, A>::const_iterator;

		// proto�ֶ�����
		enum ProtoFieldType
		{
			// bool
			PFT_Bool = 0,
			// int32
			PFT_Int32,
			// sint32
			PFT_SInt32,
			// uint32
			PFT_UInt32,
			// int64
			PFT_Int64,
			// sint64
			PFT_SInt64,
			// uint64
			PFT_UInt64,
			// enum
			PFT_Enum,
			// float
			PFT_Float,
			// double
			PFT_Double,
			// string
			PFT_String,
			// message
			PFT_Message,
		};

		// proto�ֶ�����
		enum ProtoWireType
		{
			// int32, int64, uint32, uint64, sint32, sint64, bool, enum
			PWT_Varint = 0,
			// double
			PWT_64bit,
			// string, bytes, messages, proto3 repeated, miniproto repeated
			PWT_LengthDelimited,
			// unused
			PWT_StartGroup,
			// unused
			PWT_EndGroup,
			// float
			PWT_32bit,
			// invalid type
			PWT_Unknown,
		};

		// proto�ֶ������ض��壬���Զ�����Եĳ�����������ģ�庯������
#define ProtoMember(MemberType, FieldType, WireType, ArrayWireType) \
		class Proto##MemberType \
		{ \
		public: \
			static ProtoWireType GetWireType() { return WireType; }\
		}; \
		const Proto##MemberType CommonProto##MemberType = Proto##MemberType();

		ProtoMember(Bool, PFT_Bool, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(Int32, PFT_Int32, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(SInt32, PFT_SInt32, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(UInt32, PFT_UInt32, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(Int64, PFT_Int64, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(SInt64, PFT_SInt64, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(UInt64, PFT_UInt64, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(Enum, PFT_Enum, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(Float, PFT_Float, PWT_32bit, PWT_LengthDelimited);
		ProtoMember(Double, PFT_Double, PWT_64bit, PWT_LengthDelimited);
		ProtoMember(String, PFT_String, PWT_LengthDelimited, PWT_LengthDelimited);
		ProtoMember(Message, PFT_Message, PWT_LengthDelimited, PWT_LengthDelimited);

	}
}

#endif