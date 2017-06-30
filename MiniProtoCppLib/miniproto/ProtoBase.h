#ifndef __ProtoBase_h__
#define __ProtoBase_h__

#include "ProtoDefine.h"

namespace common{
	namespace miniproto{

		// �����Զ���message�Ļ���
		class ProtoBase
		{
		public:
			ProtoBase();
			virtual ~ProtoBase();

		public:
			virtual byte_size ByteSize() const = 0;
			virtual byte_size Code(byte *buf, byte_size size) const = 0;
			virtual byte_size Decode(const byte *buf, byte_size size) = 0;
			virtual byte_size Code(std::ostream& buf, byte_size size) const = 0;
			virtual byte_size Decode(std::istream& buf, byte_size size) = 0;

		public:
			virtual void Clear() = 0;
			virtual void Release() = 0;

		public:
			bool SerializeToArray(byte *buf, byte_size size) const;
			bool ParseFromArray(const byte *buf, byte_size size);
			bool SerializeToStream(std::ostream& buf, byte_size size) const;
			bool ParseFromStream(std::istream& buf, byte_size size);
		};

	}
}

#endif