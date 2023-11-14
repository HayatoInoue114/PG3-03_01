#pragma once

#include <memory> // stf::unique_ptrを使うために必要
#include "IScene.h" // シーンの基底クラスに加えて
#include "StageScene.h" // 各シーンを読み込む
#include "TitleScene.h"
#include "ClearScene.h"

class GameManager
{
public:
	GameManager(); // コンストラクタ

	int Run(); // この関数でゲームループを呼び出す

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

private:
	InputManager* inputManager_;

	// シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_; // 現在のシーン
	int prevSceneNo_; // 前のシーン

};

