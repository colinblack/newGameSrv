#include "BattleServer.h"


int main(int argc,char** argv){

	if(!BattleServer1::Instance()->Initialize())
	{
		printf("battle Server Initialize Error\n");
		return 0;
	}

	if(!LogicManager::Instance()->Initialize()){
		printf("LogicManager Init failed\n");
		return 0;
	}

//逻辑线程
/* 	if(!BattleServer::Instance()->InitThread())
	{
		printf("battle Server InitThread Error\n");
		return 0;
	} */

	if(!BattleServer1::Instance()->Run())
	{
		fatal_log("[FireServer::Run fail]");
	}

	LogicManager::Instance()->Destroy();
	BattleServer::Instance()->Destroy();


	return 0;
}
