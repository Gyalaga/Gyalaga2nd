#ifndef _SCENE_MGR_H_
#define _SCENE_MGR_H_

typedef enum {
	eScene_TITLE,    //�^�C�g���V�[��
	eScene_GAME,     //�Q�[���V�[��
	eScene_RESULT,   //���U���g�V�[��
}eScene;

//�X�V
void Scene_change();

//���� nextScene �ɃV�[����ύX����
void Change_scene(eScene nextScene);

#endif // !1