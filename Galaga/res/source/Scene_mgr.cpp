#include "DxLib.h"
#include "../header/Scene_mgr.h"

static eScene Scene = eScene_TITLE;

//現在のシーンごとの処理
void Scene_change() {
	switch (Scene) {        //シーンによって処理を分岐
	case eScene_TITLE:
		//Title_update();
		//Title_draw();
		break;
	case eScene_GAME:
		//Game_update();
		//Game_draw();
		break;
	case eScene_RESULT:
		//Result_update();
		//Result_draw();
		break;
	}
}

void Change_scene(eScene nextScene) {

	Scene = nextScene;
}
