//Have fun reversing my login system for the old loader


void __usercall sub_1407A5E53(char _CL@<cl>, char a2@<bl>, int a3@<r13d>, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  unsigned __int64 v70; // rt0
  int v71; // ebp
  signed __int32 v79; // eax
  int v80; // [rsp+A50h] [rbp+8h]

  v70 = __readeflags();
  v71 = (signed __int16)a3;
  LOWORD(v71) = (unsigned __int8)~(_BYTE)v80;
  _DI = ~(a2 + 1);
  _EBP = ~(a3 & v71);
  __asm { rcr     dil, cl }
  LOBYTE(_EBP) = _EBP - 121;
  __asm { rcl     ebp, cl }
  _RBX = -_byteswap_ulong(1 - ~v80) - 1 + 0x100000000i64;
  _AX = 0;
  __asm
  {
    rcl     ax, cl
    rcr     ax, 0DFh
  }
  v79 = ~(_byteswap_ulong(__ROR4__((_RBX ^ *(_DWORD *)(_RBX - 4)) + 1684154571, 1)) + 1298227532);
  BYTE1(_RBX) = 3;
  __asm { rcl     bh, 6Bh }
  JUMPOUT(__CS__, (char *)&loc_1407A5F48 + v79);
}
