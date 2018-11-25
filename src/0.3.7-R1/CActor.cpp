/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CActor.h"

SAMP::CActor::CActor(int nSkin, CVector vPos, float fRotation) {
	((void(__thiscall *)(CActor *, int, CVector, float))SAMP_ADDROF(0x97C60))(this, nSkin, vPos, fRotation);
}

void SAMP::CActor::Destroy() {
	((void(__thiscall *)(CActor *))SAMP_ADDROF(0x97DA0))(this);
}

void SAMP::CActor::ApplyAnim(const char *szAnim, const char *szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
	((void(__thiscall *)(CActor *, const char *, const char *, float, int, int, int, int, int))SAMP_ADDROF(0x97E00))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

void SAMP::CActor::SetRotation(float fValue) {
	((void(__thiscall *)(CActor *, float))SAMP_ADDROF(0x97F10))(this, fValue);
}

void SAMP::CActor::SetHealth(float fValue) {
	((void(__thiscall *)(CActor *, float))SAMP_ADDROF(0x97F70))(this, fValue);
}

float SAMP::CActor::GetHealth() {
	return ((float(__thiscall *)(CActor *))SAMP_ADDROF(0x97F50))(this);
}

void SAMP::CActor::SetInvulnerable(bool bInv) {
	((void(__thiscall *)(CActor *, bool))SAMP_ADDROF(0x980A0))(this, bInv);
}