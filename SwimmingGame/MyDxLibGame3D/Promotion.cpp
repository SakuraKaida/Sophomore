#include "Promotion.h"

// �萔
const int DRAW_X = 45;
const int DRAW_Y = 85;
const int DRAW_Y2 = 0;

Promotion::Promotion()
	: mDrawPos(VGet(0.0f, 10.0f, 70.0f))  // �\��������|�W�V����
	, mPromo(-1)
{
	// ���f���̃��[�h
	mPromo = MV1LoadModel("data/promotion/untitled.mv1");

}

Promotion::~Promotion()
{
	// ���f���f�[�^�̍폜
	MV1DeleteModel(mPromo);
}

void Promotion::Draw()
{
	MV1SetScale(mPromo, VGet(0.05f,0.05f,0.1f));
	/*MV1SetRotationXYZ(mPromo, VGet(90.0f * DX_PI_F / 180.0f, 0.0f, 0.0f));*/
	MV1SetPosition(mPromo, mDrawPos);
	//MV1SetTextureGraphHandle(mPromo, 0, mSimple, TRUE);
	MV1DrawModel(mPromo);

	//// ��U
	//if (GetCameraAngleHRotate() == 0.0f)
	//{
	//}
}
