#pragma once
#include "DxLib.h"

class Promotion
{
public:

	// コンストラクタ
	Promotion();
	// デストラクタ
	~Promotion();

	/// <summary>
	/// 広告の描画
	/// </summary>
	void Draw();


	/// <summary>
	/// 広告のポジションをセット
	/// </summary>
	void SetPosition();

private:
	// 表示させるポジション
	const VECTOR mPromoDrawPos[8];
	const VECTOR mBaseDrawPos1[2];
	const VECTOR mBaseDrawPos2[2];
	const VECTOR mSetSize;

	// シンプルな広告
	int mSimple;
	// ファルソックの広告
	int mFalsoc;
	// 学校の広告
	int mSchool;
	// ほのぼのの広告
	int mHonobono;
	// コーラの広告
	int mKora;
	// 日本の広告
	int mJapan;
	// やまこの広告
	int mYamako;

	// 広告の土台
	int mPromo[7];
	// 広告のベース
	int mPromoBase1[2];
	int mPromoBase2[2];
};

