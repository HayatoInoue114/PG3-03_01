#include "IScene.h"

// タイトルシーンで初期化
int IScene::sceneNo = TITLE;

// 純粋デストラクタの定義
// 純粋仮想関数化していないので、ここで定義できる
IScene::~IScene() {}

// シーン番号のゲッター
int IScene::GetSceneNo() { return sceneNo; }