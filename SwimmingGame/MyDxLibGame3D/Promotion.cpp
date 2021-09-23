#include "Promotion.h"

// �萔
const int DRAW_X = 45;
const int DRAW_Y = 85;
const int DRAW_Y2 = 0;

Promotion::Promotion()
	: mDrawPos(VGet(0.0f, 13.0f, 68.0f))  // �\��������|�W�V����
	, mPromo(-1)
{
	// ���f���̃��[�h
	mPromo = MV1LoadModel("data/promotion/untitled.mv1");

	// �摜�̃��[�h
	mSimple = LoadGraph("data/promotion/sinkuro.jpg");
	mFalsoc = LoadGraph("data/promotion/falsoc.jpg");;
	mSchool = LoadGraph("data/promotion/gakkou.jpg");;
	mHonobono = LoadGraph("data/promotion/honobono.jpg");;
	mKora = LoadGraph("data/promotion/ko-ra.jpg");;
	mJapan = LoadGraph("data/promotion/nihon.jpg");;
	mYamako = LoadGraph("data/promotion/yamako.jpg");;
}

Promotion::~Promotion()
{
	// ���f���f�[�^�̍폜
	MV1DeleteModel(mPromo);
	// �摜�f�[�^�̍폜
	DeleteGraph(mSimple);
	DeleteGraph(mFalsoc);
	DeleteGraph(mSchool);
	DeleteGraph(mHonobono);
	DeleteGraph(mKora);
	DeleteGraph(mJapan);
	DeleteGraph(mYamako);
}

void Promotion::Draw()
{
	MV1SetScale(mPromo, VGet(0.005f,0.005f,0.01f));
	/*MV1SetRotationXYZ(mPromo, VGet(90.0f * DX_PI_F / 180.0f, 0.0f, 0.0f));*/
	MV1SetPosition(mPromo, mDrawPos);
	MV1SetTextureGraphHandle(mPromo, 0, mSimple, TRUE);
	MV1DrawModel(mPromo);

	//// ��U
	//if (GetCameraAngleHRotate() == 0.0f)
	//{
	//}
}
