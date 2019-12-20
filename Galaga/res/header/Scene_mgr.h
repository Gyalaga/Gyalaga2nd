#ifndef _SCENE_MGR_H_
#define _SCENE_MGR_H_

typedef enum {
	eScene_TITLE,    //タイトルシーン
	eScene_GAME,     //ゲームシーン
	eScene_RESULT,   //リザルトシーン
}eScene;

//更新
void Scene_change();

//引数 nextScene にシーンを変更する
void Change_scene(eScene nextScene);

#endif // !1