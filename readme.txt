������Ŀ¼�ṹ˵����
MiniProto ���Щ� MiniProto �����������������������Щ� logic �����������Щ� ProtoParse.h/ProtoParse.cpp			// ��������proto�ļ�
           ��                       ��             ���� ProtoCodeTool.h/ProtoCodeTool.cpp		// �������ɴ���
           ��                       ���� tool �������������Щ� StringTool.h/StringTool.cpp			// �����࣬�����ַ�������
           ��                       ��             ���� FileData.h/FileData.cpp			// �����࣬�����ı��ļ���д
           ��                       ���� MiniProto.cpp						// main�������������в��������ö�Ӧ����
           ��                       ���� MiniProto.vcxproj						// vs2013��c++�����ļ������ɴ������ɹ���miniproto.exe��������ReleaseĿ¼
           �� 
           ���� MiniProtoCppLib �����������Щ� miniproto ���Щ� ProtoDefine.h				// miniproto��c++���ļ���һЩ����/ö��/��������
           ��                       ��             ���� ProtoBase.h/ProtoBase.cpp			// miniproto��c++���ļ�������message�Ļ���
           ��                       ��             ���� ProtoTool.h/ProtoTool.cpp			// miniproto��c++���ļ��������������͵ı�����߼�
           ��                       ��             ���� ProtoBitMap.h				// miniproto��c++���ļ������ڱ��message�ֶ��Ƿ���ֵ��λͼ
           ��                       ���� MiniProtoCppLib.vcxproj					// vs2013��c++�����ļ�������libminiproto.lib��������ReleaseĿ¼
           �� 
           ���� MiniProtoCppTest ���������Щ� message �������Щ� Proto1.h					// Release�ļ�����proto1.proto�����ļ����ɵĶ�Ӧc++�����ļ�
           ��                       ��             ���� Proto2.h					// Release�ļ�����proto2.proto�����ļ����ɵĶ�Ӧc++�����ļ�
           ��                       ���� MiniProtoCppTest.cpp					// main����������proto1/proto2�е�message���������л�/�����л�����
           ��                       ���� MiniProtoCppTest.vcxproj					// vs2013��c++�����ļ�������ʾ����ʾ
           �� 
           ���� MiniProtoCSharpDll �����Щ� miniproto ���Щ� ProtoDefine.cs				// miniproto��c#���ļ���һЩ����/ö�ٶ���
           ��                       ��             ���� ProtoBase.cs				// miniproto��c#���ļ�������message�Ļ���
           ��                       ��             ���� ProtoTool.cs				// miniproto��c#���ļ��������������͵ı�����߼�
           ��                       ��             ���� ProtoBitMap.cs				// miniproto��c#���ļ������ڱ��message�ֶ��Ƿ���ֵ��λͼ
           ��                       ���� Properties ���� AssemblyInfo.cs				// vs2013��c#������Ϣ�ļ�
           ��                       ���� MiniProtoCSharpDll.csproj					// vs2013��c#�����ļ�������dllminiproto.dll��������ReleaseĿ¼
           ��
           ���� MiniProtoCSharpTest ���Щ� message �������Щ� Proto1.cs					// Release�ļ�����proto1.proto�����ļ����ɵĶ�Ӧc#�����ļ�
           ��                       ��             ���� Proto2.cs					// Release�ļ�����proto2.proto�����ļ����ɵĶ�Ӧc#�����ļ�
           ��                       ���� Program.cpp						// main����������proto1/proto2�е�message���������л�/�����л�����
           ��                       ���� App.config						// c#���������ļ�
           ��                       ���� Properties ���� AssemblyInfo.cs				// vs2013��c#������Ϣ�ļ�
           ��                       ���� MiniProtoCSharpTest.csproj				// vs2013��c#�����ļ�������ʾ����ʾ
           ��
           ���� MiniProtoJavaJar ���������Щ� src ���������������� common ������ miniproto ���Щ� ProtoDefine.java	// miniproto��java���ļ���һЩ����/ö�ٶ���
           ��                       ��                                     ���� ProtoBase.java	// miniproto��java���ļ�������message�Ļ���
           ��                       ��                                     ���� ProtoTool.java	// miniproto��java���ļ��������������͵ı�����߼�
           ��                       ��                                     ���� ProtoBitMap.java	// miniproto��java���ļ������ڱ��message�ֶ��Ƿ���ֵ��λͼ
           ��                       ���� .settings							// MyEclipse��java��Ŀ�ļ�������miniproto.jar������jarʱ������ΪRelease/miniproto.jar
           ��                       ���� .classpath						// MyEclipse��java��Ŀ�ļ�
           ��                       ���� .project							// MyEclipse��java��Ŀ�ļ�
           ��
           ���� MiniProtoJavaTest �������Щ� src �������������Щ� common ���Щ� proto1 ������������ Proto1.java		// Release�ļ�����proto1.proto�����ļ����ɵĶ�Ӧjava�����ļ�
           ��                       ��            ��          ���� proto2 ������������ Proto2.java		// Release�ļ�����proto2.proto�����ļ����ɵĶ�Ӧjava�����ļ�
           ��                       ��            ���� MiniProtoJavaTest.java			// main����������proto1/proto2�е�message���������л�/�����л�����
           ��                       ���� .settings							// MyEclipse��java��Ŀ�ļ���referenced libraries�뵼��Release/miniproto.jar
           ��                       ���� .classpath						// MyEclipse��java��Ŀ�ļ�
           ��                       ���� .project							// MyEclipse��java��Ŀ�ļ�
           ��
           ���� Release ���������������������������Щ� Proto1.proto						// ���ڲ����õ�proto�ļ�
           ��                       ���� Proto2.proto						// ���ڲ����õ�proto�ļ�
           ��                       ���� libminiproto.lib						// ����c++��Ŀ��lib��̬��
           ��                       ���� dllminiproto.dll						// ����c#��Ŀ��dll��̬��
           ��                       ���� miniproto.jar						// ����java��Ŀ��jar���
           ��                       ���� MiniProto.exe						// miniproto�Ĵ������ɹ���
           ��                       ���� MiniProto.bat						// MiniProto.exe���������ļ���exe�����в���ʾ��
           ��
           ���� Clean.bat										// ���������ļ���������
	   ���� readme.txt									// ��˵���ļ�
	   ���� Tools.sln										// vs2013�Ĺ����ļ�


����˵����
��vs2013����߰汾����Tools.sln��ѡ��release��win32��MiniProto��Ŀ��Ҫ�������Լ���boost��·����
����MiniProto����releaseĿ¼�¿�������MiniProto.exe���������Զ����ɹ���exe
����MiniProtoCppLib����releaseĿ¼�¿�������libminiproto.lib����miniproto��lib�ļ�������c++��Ŀ
����MiniProtoCSharpDll����releaseĿ¼�¿�������dllminiproto.dll����miniproto��dll�ļ�������c#��Ŀ
��myeclipse����MiniProtoJavaJar������jar����releaseĿ¼�£��õ�java��Ŀ�����