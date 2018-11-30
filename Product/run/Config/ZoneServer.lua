

--GameServer 游戏服务器, 一般一个小区只有一个， 负责游戏非战斗的业务， 连接世界服务器
Server[#Server+1] = {
		ServerName = "GameServer",
		ServerType = NF_ST_GAME,
		ServerId = 10;			--对每一个服务器来说都是唯一的， 应用程序需要通过这个ServerId才能知道需要加载的配置是他
		MasterId = 1;			--需要与MasterServer的MasterId保持一致
		WorldId = 100;			--需要与一个世界服务器的WorldId一样
		ZoneId = ZoneServerId,
		ServerIp = ZoneIP,
		ServerPort = ZonePort+#Server,
		MaxConnectNum = 100,
		WorkThreadNum = 1,
		Security = false,
		WebSocket = false,
	};
	
--ProxyServer 网管服务器， 负责与外部的客户端连接, 转发数据
Server[#Server+1] = {
		ServerName = "ProxyServer",
		ServerType = NF_ST_PROXY,
		ServerId = 11,			--对每一个服务器来说都是唯一的， 应用程序需要通过这个ServerId才能知道需要加载的配置是他
		MasterId = 1,			--需要与MasterServer的MasterId保持一致
		WorldId = 100,			--需要与一个世界服务器的WorldId一样
		ZoneId = ZoneServerId,
		ServerIp = ZoneIP,
		ServerPort = ZonePort+#Server,
		MaxConnectNum = 1000,
		WorkThreadNum = 5,
		Security = false,
		WebSocket = true,
	};
