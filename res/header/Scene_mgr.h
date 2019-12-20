#pragma once

typedef enum {
	eScene_TITLE,    //タイトルシーン
	eScene_GAME,     //ゲームシーン
	eScene_RESULT,   //リザルトシーン
}eScene;

//更新
void Scene_change();

//引数 nextScene にシーンを変更する