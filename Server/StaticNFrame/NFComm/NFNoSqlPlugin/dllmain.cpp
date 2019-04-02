#ifdef _DEBUG

#if NF_PLATFORM == NF_PLATFORM_WIN
#pragma comment( lib, "ws2_32" )
#pragma comment( lib, "anet_win64_d.lib" )
#pragma comment( lib, "NFCore_d.lib" )
#pragma comment( lib, "Theron_d.lib" )
#pragma comment( lib, "libprotobuf_d.lib" )
#pragma comment( lib, "NFMessageDefine_d.lib" )
#elif NF_PLATFORM == NF_PLATFORM_LINUX || NF_PLATFORM == NF_PLATFORM_ANDROID


#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
#endif

#else

#if NF_PLATFORM == NF_PLATFORM_WIN
#pragma comment( lib, "ws2_32" )
#pragma comment( lib, "anet_win64.lib" )
#pragma comment( lib, "Theron.lib" )
#pragma comment( lib, "NFCore.lib" )
#pragma comment( lib, "libprotobuf.lib" )
#pragma comment( lib, "NFMessageDefine.lib" )

#elif NF_PLATFORM == NF_PLATFORM_LINUX || NF_PLATFORM == NF_PLATFORM_ANDROID
#pragma comment( lib, "anet_win64.lib" )
#pragma comment( lib, "libtherond.a")
#pragma comment( lib, "NFCore.a")
#pragma comment( lib, "libprotobuf.a" )
#pragma comment( lib, "NFMessageDefine.a" )
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
#endif

#endif
