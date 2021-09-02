#pragma once
#include "DxLib.h"

class Score;

/// <summary>
/// �^�C�~���O�Q�[�W�̃N���X
/// </summary>
class Timing
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Timing();
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Timing();

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

	/// <summary>
	/// �X�R�A���擾
	/// </summary>
	/// <returns>���݂̃X�R�A��Ԃ�</returns>
	Score* GetScore() { return mScorePtr; }

	/// <summary>
	/// CSV�f�[�^�̓ǂݍ���
	/// </summary>
	void CSVRead();


protected:
	

private:
	//  �t���O
	// �^�C�~���O�Q�[�W��`�悷��t���O�Ǘ�
	bool mTimingDrawFlag;
	// �^�C�~���O�Q�[�W�̃N���b�N�o���邩�̃t���O�Ǘ�
	bool mTimingFlag;
	// Perfect�̃t���O�Ǘ�
	bool mPerfectFlag;
	// Good�̃t���O�Ǘ�
	bool mGoodFlag;
	// Bad�̃t���O�Ǘ�
	bool mBadFlag;

	//  �Q�[�W
	// �Q�[�W�̍��WX
	int mGageX;
	// �Q�[�W�̍��WY
	int mGageY;
	// �Q�[�W�̒��S���WX
	int mGageCX;
	// �Q�[�W�̒��S���WY
	int mGageCY;
	// ���k����Q�[�W�̔��a
	int mRadius;
	// ���肪�p�[�t�F�N�g�ɂȂ�Q�[�W�̔��a
	int mGageRadius;
	// ���a�̏�����
	int mRadiusInit;

	//  �F
	// ���F
	int	mBrack;
	// ���F
	int mWhite;

	//  ���A�N�V����
	// ���A�N�V�������`�悳���ʒu�ɂ���t���[���̉摜
	int mFreamImg;
	// �t���[���̍��WX
	int mFreamX;
	// �t���[���̍��WY
	int mFreamY;
	// ���A�N�V�����̍��WX
	int mReactionX;
	// ���A�N�V�����̍��WY
	int mReactionY;
	// �p�[�t�F�N�g���A�N�V�����̉摜
	int mPerfectImg;
	// �p�[�t�F�N�g�̔��a
	int mPerfectRadius;
	// �O�b�h���A�N�V�����̉摜
	int mGoodImg;
	// �o�b�h���A�N�V�����̉摜
	int mBadImg;
	// �o�b�h�̔��a
	int mBadRadius;


	//  �J�E���g
	// ���A�N�V������`�悷�鎞�Ԃ��J�E���g����
	int mReactionCount;
	// ���A�N�V������`�悷�鎞�Ԃ̍ő�l
	int mReactionCountMax;
	// �J�E���g��������
	int mCountInit;
	// �t���[�����̃J�E���g
	float mCount;
	// �J�E���g�������
	float mCountPack;

	//  CSV
// CSV�t�@�C�����i�[
	char mCsv[24] = "data/CSV/TestTiming.csv";
	// �t�@�C���̃|�C���^
	FILE* mFilePointer;
	// �f�[�^���i�[
	char mCsvData;

	float mNum;
	char mBuffer[10];
	float mCell[1][31];
	int mColumnNum;
	int mRawNum;
	bool mEofFlag;
	float mRhythm[31];

	//  �X�R�A
	// Score�����t���O
	bool mScoreFlag;
	// �X�R�A
	class Score* mScorePtr;


	//  �G�t�F�N�g
	// �G�t�F�N�g�摜
	int mEffectImg;       
	// �p�[�t�F�N�g�G�t�F�N�g�摜
	int mPerfectEffectImg;
	// �O�b�h�G�t�F�N�g�摜
	int mGoodEffectImg;   
	// �o�b�h�G�t�F�N�g�摜
	int mBadEffectImg;    
	// �G�t�F�N�g�̑傫��
	double mEffectScale;  
	// �G�t�F�N�g�̃A���O��
	double mEffectAngle;  
	// �G�t�F�N�g�����񂾂�傫���Ȃ鎞�Ƀv���X����l
	double mScalePlus;    
	// �G�t�F�N�g���J�X���鎞�Ƀv���X����l
	double mAngleRotate;  
	// �G�t�F�N�g�𔭐�������t���O
	bool mEffectFlag;




	//  �T�E���h
	// �p�[�t�F�N�g�̎��ɂȂ���ʉ�
	class Sound* mPerfectSound;
	// �O�b�h�̎��ɂȂ���ʉ�
	class Sound* mGoodSound;
	// �o�b�h�̎��ɂȂ���ʉ�
	class Sound* mBadSound;
};
