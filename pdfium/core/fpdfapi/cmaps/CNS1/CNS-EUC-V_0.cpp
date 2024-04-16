// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "core/fpdfapi/cmaps/CNS1/cmaps_cns1.h"

const uint16_t g_FXCMAP_CNS_EUC_V_0[180 * 3] = {
    0x0020, 0x007E, 0x3550, 0xA1A1, 0xA1AB, 0x0063, 0xA1AC, 0xA1AC, 0x354E,
    0xA1AD, 0xA1BA, 0x006F, 0xA1BB, 0xA1BB, 0x007C, 0xA1BC, 0xA1BC, 0x007E,
    0xA1BD, 0xA1BD, 0x007E, 0xA1BE, 0xA1BF, 0x0082, 0xA1C0, 0xA1C1, 0x0082,
    0xA1C2, 0xA1C3, 0x0086, 0xA1C4, 0xA1C5, 0x0086, 0xA1C6, 0xA1C7, 0x008A,
    0xA1C8, 0xA1C9, 0x008A, 0xA1CA, 0xA1CB, 0x008E, 0xA1CC, 0xA1CD, 0x008E,
    0xA1CE, 0xA1CF, 0x0092, 0xA1D0, 0xA1D1, 0x0092, 0xA1D2, 0xA1D3, 0x0096,
    0xA1D4, 0xA1D5, 0x0096, 0xA1D6, 0xA1D7, 0x009A, 0xA1D8, 0xA1D9, 0x009A,
    0xA1DA, 0xA1DB, 0x009E, 0xA1DC, 0xA1FE, 0x009E, 0xA2A1, 0xA2C3, 0x00C1,
    0xA2C4, 0xA2C4, 0x354F, 0xA2C5, 0xA2FE, 0x00E5, 0xA3A1, 0xA3CE, 0x011F,
    0xA4A1, 0xA4FE, 0x014D, 0xA5A1, 0xA5EC, 0x01AB, 0xA5EE, 0xA5F0, 0x01F7,
    0xA6A1, 0xA6BE, 0x01FA, 0xA7A1, 0xA7A1, 0x0253, 0xA7A2, 0xA7A4, 0x0218,
    0xA7A5, 0xA7A5, 0x0254, 0xA7A6, 0xA7A6, 0x021B, 0xA7A7, 0xA7A7, 0x025A,
    0xA7A8, 0xA7A8, 0x021C, 0xA7A9, 0xA7AC, 0x025B, 0xA7AD, 0xA7AF, 0x021D,
    0xA7B0, 0xA7B0, 0x025F, 0xA7B1, 0xA7B1, 0x176E, 0xA7B2, 0xA7B2, 0x0260,
    0xA7B3, 0xA7B3, 0x0262, 0xA7B4, 0xA7B4, 0x0220, 0xA7B5, 0xA7B5, 0x0263,
    0xA7B6, 0xA7B6, 0x176F, 0xA7B7, 0xA7B7, 0x0221, 0xA7B8, 0xA7B9, 0x0264,
    0xA7BA, 0xA7BA, 0x0222, 0xA7BB, 0xA7BB, 0x1770, 0xA7BC, 0xA7BC, 0x0223,
    0xA7BD, 0xA7BD, 0x0266, 0xA7BE, 0xA7BE, 0x0279, 0xA7BF, 0xA7BF, 0x1775,
    0xA7C0, 0xA7C1, 0x027A, 0xA7C2, 0xA7C2, 0x0224, 0xA7C3, 0xA7C6, 0x027C,
    0xA7C7, 0xA7C7, 0x0225, 0xA7C8, 0xA7CB, 0x0282, 0xA7CC, 0xA7CC, 0x1776,
    0xA7CD, 0xA7CD, 0x0286, 0xA7CE, 0xA7CE, 0x0226, 0xA7CF, 0xA7D0, 0x0288,
    0xA7D1, 0xA7D2, 0x028C, 0xA7D3, 0xA7D5, 0x0227, 0xA7D6, 0xA7D8, 0x028E,
    0xA7D9, 0xA7DA, 0x022A, 0xA7DB, 0xA7DB, 0x1777, 0xA7DC, 0xA7DF, 0x02D0,
    0xA7E0, 0xA7E0, 0x02D5, 0xA7E1, 0xA7E1, 0x022C, 0xA7E2, 0xA7E5, 0x02D6,
    0xA7E6, 0xA7E6, 0x022D, 0xA7E7, 0xA7ED, 0x02DA, 0xA7EE, 0xA7EE, 0x178A,
    0xA7EF, 0xA7F2, 0x02E1, 0xA7F3, 0xA7F3, 0x178C, 0xA7F4, 0xA7F8, 0x02E5,
    0xA7F9, 0xA7F9, 0x178D, 0xA7FA, 0xA7FD, 0x02EA, 0xA7FE, 0xA7FE, 0x0356,
    0xA8A1, 0xA8A6, 0x0357, 0xA8A7, 0xA8A7, 0x035E, 0xA8A8, 0xA8A8, 0x0362,
    0xA8A9, 0xA8AA, 0x022E, 0xA8AB, 0xA8B2, 0x0363, 0xA8B3, 0xA8B3, 0x17B2,
    0xA8B4, 0xA8B6, 0x036B, 0xA8B7, 0xA8BA, 0x03F6, 0xA8BB, 0xA8BB, 0x1812,
    0xA8BC, 0xA8BE, 0x03FA, 0xA8BF, 0xA8C3, 0x03FE, 0xA8C4, 0xA8CC, 0x0405,
    0xA8CD, 0xA8CD, 0x1813, 0xA8CE, 0xA8CE, 0x1818, 0xA8CF, 0xA8D2, 0x040F,
    0xA8D3, 0xA8D3, 0x1819, 0xA8D4, 0xA8D9, 0x0508, 0xA8DA, 0xA8DA, 0x18E7,
    0xA8DB, 0xA8E2, 0x050E, 0xA8E3, 0xA8E3, 0x0230, 0xA8E4, 0xA8E4, 0x051B,
    0xA8E5, 0xA8E7, 0x0520, 0xA8E8, 0xA8EB, 0x0696, 0xA8EC, 0xA8EC, 0x0231,
    0xA8ED, 0xA8F0, 0x069F, 0xA8F1, 0xA8FB, 0x0826, 0xA8FC, 0xA8FE, 0x09F5,
    0xA9A1, 0xA9A1, 0x1E33, 0xA9A2, 0xA9A2, 0x09F8, 0xA9A3, 0xA9A3, 0x1E34,
    0xA9A4, 0xA9A5, 0x09F9, 0xA9A6, 0xA9AB, 0x0BE1, 0xA9AC, 0xA9AE, 0x0DBB,
    0xA9AF, 0xA9AF, 0x2360, 0xA9B0, 0xA9B0, 0x2612, 0xA9B1, 0xA9B3, 0x0F7B,
    0xA9B4, 0xA9B5, 0x1100, 0xA9B6, 0xA9B6, 0x1289, 0xA9B7, 0xA9B8, 0x13B2,
    0xA9B9, 0xA9B9, 0x2F0D, 0xC2A1, 0xC2C1, 0x0232, 0xC4A1, 0xC4FE, 0x0253,
    0xC5A1, 0xC5FE, 0x02B1, 0xC6A1, 0xC6FE, 0x030F, 0xC7A1, 0xC7FE, 0x036D,
    0xC8A1, 0xC8FE, 0x03CB, 0xC9A1, 0xC9FE, 0x0429, 0xCAA1, 0xCAFE, 0x0487,
    0xCBA1, 0xCBFE, 0x04E5, 0xCCA1, 0xCCFE, 0x0543, 0xCDA1, 0xCDFE, 0x05A1,
    0xCEA1, 0xCEFE, 0x05FF, 0xCFA1, 0xCFFE, 0x065D, 0xD0A1, 0xD0FE, 0x06BB,
    0xD1A1, 0xD1FE, 0x0719, 0xD2A1, 0xD2FE, 0x0777, 0xD3A1, 0xD3FE, 0x07D5,
    0xD4A1, 0xD4FE, 0x0833, 0xD5A1, 0xD5FE, 0x0891, 0xD6A1, 0xD6FE, 0x08EF,
    0xD7A1, 0xD7FE, 0x094D, 0xD8A1, 0xD8FE, 0x09AB, 0xD9A1, 0xD9FE, 0x0A09,
    0xDAA1, 0xDAFE, 0x0A67, 0xDBA1, 0xDBFE, 0x0AC5, 0xDCA1, 0xDCFE, 0x0B23,
    0xDDA1, 0xDDFE, 0x0B81, 0xDEA1, 0xDEFE, 0x0BDF, 0xDFA1, 0xDFFE, 0x0C3D,
    0xE0A1, 0xE0FE, 0x0C9B, 0xE1A1, 0xE1FE, 0x0CF9, 0xE2A1, 0xE2FE, 0x0D57,
    0xE3A1, 0xE3FE, 0x0DB5, 0xE4A1, 0xE4FE, 0x0E13, 0xE5A1, 0xE5FE, 0x0E71,
    0xE6A1, 0xE6FE, 0x0ECF, 0xE7A1, 0xE7FE, 0x0F2D, 0xE8A1, 0xE8FE, 0x0F8B,
    0xE9A1, 0xE9FE, 0x0FE9, 0xEAA1, 0xEAFE, 0x1047, 0xEBA1, 0xEBFE, 0x10A5,
    0xECA1, 0xECFE, 0x1103, 0xEDA1, 0xEDFE, 0x1161, 0xEEA1, 0xEEFE, 0x11BF,
    0xEFA1, 0xEFFE, 0x121D, 0xF0A1, 0xF0FE, 0x127B, 0xF1A1, 0xF1FE, 0x12D9,
    0xF2A1, 0xF2FE, 0x1337, 0xF3A1, 0xF3FE, 0x1395, 0xF4A1, 0xF4FE, 0x13F3,
    0xF5A1, 0xF5FE, 0x1451, 0xF6A1, 0xF6FE, 0x14AF, 0xF7A1, 0xF7FE, 0x150D,
    0xF8A1, 0xF8FE, 0x156B, 0xF9A1, 0xF9FE, 0x15C9, 0xFAA1, 0xFAFE, 0x1627,
    0xFBA1, 0xFBFE, 0x1685, 0xFCA1, 0xFCFE, 0x16E3, 0xFDA1, 0xFDCB, 0x1741,
};

const uint16_t g_FXCMAP_CNS_EUC_V_0_DWord[261 * 4] = {
    0x8EA1, 0xA1A1, 0xA1AB, 0x0063, 0x8EA1, 0xA1AC, 0xA1AC, 0x354E, 0x8EA1,
    0xA1AD, 0xA1BA, 0x006F, 0x8EA1, 0xA1BB, 0xA1BB, 0x007C, 0x8EA1, 0xA1BC,
    0xA1BC, 0x007E, 0x8EA1, 0xA1BD, 0xA1BD, 0x007E, 0x8EA1, 0xA1BE, 0xA1BF,
    0x0082, 0x8EA1, 0xA1C0, 0xA1C1, 0x0082, 0x8EA1, 0xA1C2, 0xA1C3, 0x0086,
    0x8EA1, 0xA1C4, 0xA1C5, 0x0086, 0x8EA1, 0xA1C6, 0xA1C7, 0x008A, 0x8EA1,
    0xA1C8, 0xA1C9, 0x008A, 0x8EA1, 0xA1CA, 0xA1CB, 0x008E, 0x8EA1, 0xA1CC,
    0xA1CD, 0x008E, 0x8EA1, 0xA1CE, 0xA1CF, 0x0092, 0x8EA1, 0xA1D0, 0xA1D1,
    0x0092, 0x8EA1, 0xA1D2, 0xA1D3, 0x0096, 0x8EA1, 0xA1D4, 0xA1D5, 0x0096,
    0x8EA1, 0xA1D6, 0xA1D7, 0x009A, 0x8EA1, 0xA1D8, 0xA1D9, 0x009A, 0x8EA1,
    0xA1DA, 0xA1DB, 0x009E, 0x8EA1, 0xA1DC, 0xA1FE, 0x009E, 0x8EA1, 0xA2A1,
    0xA2C3, 0x00C1, 0x8EA1, 0xA2C4, 0xA2C4, 0x354F, 0x8EA1, 0xA2C5, 0xA2FE,
    0x00E5, 0x8EA1, 0xA3A1, 0xA3CE, 0x011F, 0x8EA1, 0xA4A1, 0xA4FE, 0x014D,
    0x8EA1, 0xA5A1, 0xA5EC, 0x01AB, 0x8EA1, 0xA5EE, 0xA5F0, 0x01F7, 0x8EA1,
    0xA6A1, 0xA6BE, 0x01FA, 0x8EA1, 0xA7A1, 0xA7A1, 0x0253, 0x8EA1, 0xA7A2,
    0xA7A4, 0x0218, 0x8EA1, 0xA7A5, 0xA7A5, 0x0254, 0x8EA1, 0xA7A6, 0xA7A6,
    0x021B, 0x8EA1, 0xA7A7, 0xA7A7, 0x025A, 0x8EA1, 0xA7A8, 0xA7A8, 0x021C,
    0x8EA1, 0xA7A9, 0xA7AC, 0x025B, 0x8EA1, 0xA7AD, 0xA7AF, 0x021D, 0x8EA1,
    0xA7B0, 0xA7B0, 0x025F, 0x8EA1, 0xA7B1, 0xA7B1, 0x176E, 0x8EA1, 0xA7B2,
    0xA7B2, 0x0260, 0x8EA1, 0xA7B3, 0xA7B3, 0x0262, 0x8EA1, 0xA7B4, 0xA7B4,
    0x0220, 0x8EA1, 0xA7B5, 0xA7B5, 0x0263, 0x8EA1, 0xA7B6, 0xA7B6, 0x176F,
    0x8EA1, 0xA7B7, 0xA7B7, 0x0221, 0x8EA1, 0xA7B8, 0xA7B9, 0x0264, 0x8EA1,
    0xA7BA, 0xA7BA, 0x0222, 0x8EA1, 0xA7BB, 0xA7BB, 0x1770, 0x8EA1, 0xA7BC,
    0xA7BC, 0x0223, 0x8EA1, 0xA7BD, 0xA7BD, 0x0266, 0x8EA1, 0xA7BE, 0xA7BE,
    0x0279, 0x8EA1, 0xA7BF, 0xA7BF, 0x1775, 0x8EA1, 0xA7C0, 0xA7C1, 0x027A,
    0x8EA1, 0xA7C2, 0xA7C2, 0x0224, 0x8EA1, 0xA7C3, 0xA7C6, 0x027C, 0x8EA1,
    0xA7C7, 0xA7C7, 0x0225, 0x8EA1, 0xA7C8, 0xA7CB, 0x0282, 0x8EA1, 0xA7CC,
    0xA7CC, 0x1776, 0x8EA1, 0xA7CD, 0xA7CD, 0x0286, 0x8EA1, 0xA7CE, 0xA7CE,
    0x0226, 0x8EA1, 0xA7CF, 0xA7D0, 0x0288, 0x8EA1, 0xA7D1, 0xA7D2, 0x028C,
    0x8EA1, 0xA7D3, 0xA7D5, 0x0227, 0x8EA1, 0xA7D6, 0xA7D8, 0x028E, 0x8EA1,
    0xA7D9, 0xA7DA, 0x022A, 0x8EA1, 0xA7DB, 0xA7DB, 0x1777, 0x8EA1, 0xA7DC,
    0xA7DF, 0x02D0, 0x8EA1, 0xA7E0, 0xA7E0, 0x02D5, 0x8EA1, 0xA7E1, 0xA7E1,
    0x022C, 0x8EA1, 0xA7E2, 0xA7E5, 0x02D6, 0x8EA1, 0xA7E6, 0xA7E6, 0x022D,
    0x8EA1, 0xA7E7, 0xA7ED, 0x02DA, 0x8EA1, 0xA7EE, 0xA7EE, 0x178A, 0x8EA1,
    0xA7EF, 0xA7F2, 0x02E1, 0x8EA1, 0xA7F3, 0xA7F3, 0x178C, 0x8EA1, 0xA7F4,
    0xA7F8, 0x02E5, 0x8EA1, 0xA7F9, 0xA7F9, 0x178D, 0x8EA1, 0xA7FA, 0xA7FD,
    0x02EA, 0x8EA1, 0xA7FE, 0xA7FE, 0x0356, 0x8EA1, 0xA8A1, 0xA8A6, 0x0357,
    0x8EA1, 0xA8A7, 0xA8A7, 0x035E, 0x8EA1, 0xA8A8, 0xA8A8, 0x0362, 0x8EA1,
    0xA8A9, 0xA8AA, 0x022E, 0x8EA1, 0xA8AB, 0xA8B2, 0x0363, 0x8EA1, 0xA8B3,
    0xA8B3, 0x17B2, 0x8EA1, 0xA8B4, 0xA8B6, 0x036B, 0x8EA1, 0xA8B7, 0xA8BA,
    0x03F6, 0x8EA1, 0xA8BB, 0xA8BB, 0x1812, 0x8EA1, 0xA8BC, 0xA8BE, 0x03FA,
    0x8EA1, 0xA8BF, 0xA8C3, 0x03FE, 0x8EA1, 0xA8C4, 0xA8CC, 0x0405, 0x8EA1,
    0xA8CD, 0xA8CD, 0x1813, 0x8EA1, 0xA8CE, 0xA8CE, 0x1818, 0x8EA1, 0xA8CF,
    0xA8D2, 0x040F, 0x8EA1, 0xA8D3, 0xA8D3, 0x1819, 0x8EA1, 0xA8D4, 0xA8D9,
    0x0508, 0x8EA1, 0xA8DA, 0xA8DA, 0x18E7, 0x8EA1, 0xA8DB, 0xA8E2, 0x050E,
    0x8EA1, 0xA8E3, 0xA8E3, 0x0230, 0x8EA1, 0xA8E4, 0xA8E4, 0x051B, 0x8EA1,
    0xA8E5, 0xA8E7, 0x0520, 0x8EA1, 0xA8E8, 0xA8EB, 0x0696, 0x8EA1, 0xA8EC,
    0xA8EC, 0x0231, 0x8EA1, 0xA8ED, 0xA8F0, 0x069F, 0x8EA1, 0xA8F1, 0xA8FB,
    0x0826, 0x8EA1, 0xA8FC, 0xA8FE, 0x09F5, 0x8EA1, 0xA9A1, 0xA9A1, 0x1E33,
    0x8EA1, 0xA9A2, 0xA9A2, 0x09F8, 0x8EA1, 0xA9A3, 0xA9A3, 0x1E34, 0x8EA1,
    0xA9A4, 0xA9A5, 0x09F9, 0x8EA1, 0xA9A6, 0xA9AB, 0x0BE1, 0x8EA1, 0xA9AC,
    0xA9AE, 0x0DBB, 0x8EA1, 0xA9AF, 0xA9AF, 0x2360, 0x8EA1, 0xA9B0, 0xA9B0,
    0x2612, 0x8EA1, 0xA9B1, 0xA9B3, 0x0F7B, 0x8EA1, 0xA9B4, 0xA9B5, 0x1100,
    0x8EA1, 0xA9B6, 0xA9B6, 0x1289, 0x8EA1, 0xA9B7, 0xA9B8, 0x13B2, 0x8EA1,
    0xA9B9, 0xA9B9, 0x2F0D, 0x8EA1, 0xC2A1, 0xC2C1, 0x0232, 0x8EA1, 0xC4A1,
    0xC4FE, 0x0253, 0x8EA1, 0xC5A1, 0xC5FE, 0x02B1, 0x8EA1, 0xC6A1, 0xC6FE,
    0x030F, 0x8EA1, 0xC7A1, 0xC7FE, 0x036D, 0x8EA1, 0xC8A1, 0xC8FE, 0x03CB,
    0x8EA1, 0xC9A1, 0xC9FE, 0x0429, 0x8EA1, 0xCAA1, 0xCAFE, 0x0487, 0x8EA1,
    0xCBA1, 0xCBFE, 0x04E5, 0x8EA1, 0xCCA1, 0xCCFE, 0x0543, 0x8EA1, 0xCDA1,
    0xCDFE, 0x05A1, 0x8EA1, 0xCEA1, 0xCEFE, 0x05FF, 0x8EA1, 0xCFA1, 0xCFFE,
    0x065D, 0x8EA1, 0xD0A1, 0xD0FE, 0x06BB, 0x8EA1, 0xD1A1, 0xD1FE, 0x0719,
    0x8EA1, 0xD2A1, 0xD2FE, 0x0777, 0x8EA1, 0xD3A1, 0xD3FE, 0x07D5, 0x8EA1,
    0xD4A1, 0xD4FE, 0x0833, 0x8EA1, 0xD5A1, 0xD5FE, 0x0891, 0x8EA1, 0xD6A1,
    0xD6FE, 0x08EF, 0x8EA1, 0xD7A1, 0xD7FE, 0x094D, 0x8EA1, 0xD8A1, 0xD8FE,
    0x09AB, 0x8EA1, 0xD9A1, 0xD9FE, 0x0A09, 0x8EA1, 0xDAA1, 0xDAFE, 0x0A67,
    0x8EA1, 0xDBA1, 0xDBFE, 0x0AC5, 0x8EA1, 0xDCA1, 0xDCFE, 0x0B23, 0x8EA1,
    0xDDA1, 0xDDFE, 0x0B81, 0x8EA1, 0xDEA1, 0xDEFE, 0x0BDF, 0x8EA1, 0xDFA1,
    0xDFFE, 0x0C3D, 0x8EA1, 0xE0A1, 0xE0FE, 0x0C9B, 0x8EA1, 0xE1A1, 0xE1FE,
    0x0CF9, 0x8EA1, 0xE2A1, 0xE2FE, 0x0D57, 0x8EA1, 0xE3A1, 0xE3FE, 0x0DB5,
    0x8EA1, 0xE4A1, 0xE4FE, 0x0E13, 0x8EA1, 0xE5A1, 0xE5FE, 0x0E71, 0x8EA1,
    0xE6A1, 0xE6FE, 0x0ECF, 0x8EA1, 0xE7A1, 0xE7FE, 0x0F2D, 0x8EA1, 0xE8A1,
    0xE8FE, 0x0F8B, 0x8EA1, 0xE9A1, 0xE9FE, 0x0FE9, 0x8EA1, 0xEAA1, 0xEAFE,
    0x1047, 0x8EA1, 0xEBA1, 0xEBFE, 0x10A5, 0x8EA1, 0xECA1, 0xECFE, 0x1103,
    0x8EA1, 0xEDA1, 0xEDFE, 0x1161, 0x8EA1, 0xEEA1, 0xEEFE, 0x11BF, 0x8EA1,
    0xEFA1, 0xEFFE, 0x121D, 0x8EA1, 0xF0A1, 0xF0FE, 0x127B, 0x8EA1, 0xF1A1,
    0xF1FE, 0x12D9, 0x8EA1, 0xF2A1, 0xF2FE, 0x1337, 0x8EA1, 0xF3A1, 0xF3FE,
    0x1395, 0x8EA1, 0xF4A1, 0xF4FE, 0x13F3, 0x8EA1, 0xF5A1, 0xF5FE, 0x1451,
    0x8EA1, 0xF6A1, 0xF6FE, 0x14AF, 0x8EA1, 0xF7A1, 0xF7FE, 0x150D, 0x8EA1,
    0xF8A1, 0xF8FE, 0x156B, 0x8EA1, 0xF9A1, 0xF9FE, 0x15C9, 0x8EA1, 0xFAA1,
    0xFAFE, 0x1627, 0x8EA1, 0xFBA1, 0xFBFE, 0x1685, 0x8EA1, 0xFCA1, 0xFCFE,
    0x16E3, 0x8EA1, 0xFDA1, 0xFDCB, 0x1741, 0x8EA2, 0xA1A1, 0xA1FE, 0x176C,
    0x8EA2, 0xA2A1, 0xA2FE, 0x17CA, 0x8EA2, 0xA3A1, 0xA3FE, 0x1828, 0x8EA2,
    0xA4A1, 0xA4FE, 0x1886, 0x8EA2, 0xA5A1, 0xA5FE, 0x18E4, 0x8EA2, 0xA6A1,
    0xA6FE, 0x1942, 0x8EA2, 0xA7A1, 0xA7FE, 0x19A0, 0x8EA2, 0xA8A1, 0xA8FE,
    0x19FE, 0x8EA2, 0xA9A1, 0xA9FE, 0x1A5C, 0x8EA2, 0xAAA1, 0xAAFE, 0x1ABA,
    0x8EA2, 0xABA1, 0xABFE, 0x1B18, 0x8EA2, 0xACA1, 0xACFE, 0x1B76, 0x8EA2,
    0xADA1, 0xADFE, 0x1BD4, 0x8EA2, 0xAEA1, 0xAEFE, 0x1C32, 0x8EA2, 0xAFA1,
    0xAFFE, 0x1C90, 0x8EA2, 0xB0A1, 0xB0FE, 0x1CEE, 0x8EA2, 0xB1A1, 0xB1FE,
    0x1D4C, 0x8EA2, 0xB2A1, 0xB2FE, 0x1DAA, 0x8EA2, 0xB3A1, 0xB3FE, 0x1E08,
    0x8EA2, 0xB4A1, 0xB4FE, 0x1E66, 0x8EA2, 0xB5A1, 0xB5FE, 0x1EC4, 0x8EA2,
    0xB6A1, 0xB6FE, 0x1F22, 0x8EA2, 0xB7A1, 0xB7FE, 0x1F80, 0x8EA2, 0xB8A1,
    0xB8FE, 0x1FDE, 0x8EA2, 0xB9A1, 0xB9FE, 0x203C, 0x8EA2, 0xBAA1, 0xBAFE,
    0x209A, 0x8EA2, 0xBBA1, 0xBBFE, 0x20F8, 0x8EA2, 0xBCA1, 0xBCFE, 0x2156,
    0x8EA2, 0xBDA1, 0xBDFE, 0x21B4, 0x8EA2, 0xBEA1, 0xBEFE, 0x2212, 0x8EA2,
    0xBFA1, 0xBFFE, 0x2270, 0x8EA2, 0xC0A1, 0xC0FE, 0x22CE, 0x8EA2, 0xC1A1,
    0xC1FE, 0x232C, 0x8EA2, 0xC2A1, 0xC2FE, 0x238A, 0x8EA2, 0xC3A1, 0xC3FE,
    0x23E8, 0x8EA2, 0xC4A1, 0xC4FE, 0x2446, 0x8EA2, 0xC5A1, 0xC5FE, 0x24A4,
    0x8EA2, 0xC6A1, 0xC6FE, 0x2502, 0x8EA2, 0xC7A1, 0xC7FE, 0x2560, 0x8EA2,
    0xC8A1, 0xC8FE, 0x25BE, 0x8EA2, 0xC9A1, 0xC9FE, 0x261C, 0x8EA2, 0xCAA1,
    0xCAFE, 0x267A, 0x8EA2, 0xCBA1, 0xCBFE, 0x26D8, 0x8EA2, 0xCCA1, 0xCCFE,
    0x2736, 0x8EA2, 0xCDA1, 0xCDFE, 0x2794, 0x8EA2, 0xCEA1, 0xCEFE, 0x27F2,
    0x8EA2, 0xCFA1, 0xCFFE, 0x2850, 0x8EA2, 0xD0A1, 0xD0FE, 0x28AE, 0x8EA2,
    0xD1A1, 0xD1FE, 0x290C, 0x8EA2, 0xD2A1, 0xD2FE, 0x296A, 0x8EA2, 0xD3A1,
    0xD3FE, 0x29C8, 0x8EA2, 0xD4A1, 0xD4FE, 0x2A26, 0x8EA2, 0xD5A1, 0xD5FE,
    0x2A84, 0x8EA2, 0xD6A1, 0xD6FE, 0x2AE2, 0x8EA2, 0xD7A1, 0xD7FE, 0x2B40,
    0x8EA2, 0xD8A1, 0xD8FE, 0x2B9E, 0x8EA2, 0xD9A1, 0xD9FE, 0x2BFC, 0x8EA2,
    0xDAA1, 0xDAFE, 0x2C5A, 0x8EA2, 0xDBA1, 0xDBFE, 0x2CB8, 0x8EA2, 0xDCA1,
    0xDCFE, 0x2D16, 0x8EA2, 0xDDA1, 0xDDFE, 0x2D74, 0x8EA2, 0xDEA1, 0xDEFE,
    0x2DD2, 0x8EA2, 0xDFA1, 0xDFFE, 0x2E30, 0x8EA2, 0xE0A1, 0xE0FE, 0x2E8E,
    0x8EA2, 0xE1A1, 0xE1FE, 0x2EEC, 0x8EA2, 0xE2A1, 0xE2FE, 0x2F4A, 0x8EA2,
    0xE3A1, 0xE3FE, 0x2FA8, 0x8EA2, 0xE4A1, 0xE4FE, 0x3006, 0x8EA2, 0xE5A1,
    0xE5FE, 0x3064, 0x8EA2, 0xE6A1, 0xE6FE, 0x30C2, 0x8EA2, 0xE7A1, 0xE7FE,
    0x3120, 0x8EA2, 0xE8A1, 0xE8FE, 0x317E, 0x8EA2, 0xE9A1, 0xE9FE, 0x31DC,
    0x8EA2, 0xEAA1, 0xEAFE, 0x323A, 0x8EA2, 0xEBA1, 0xEBFE, 0x3298, 0x8EA2,
    0xECA1, 0xECFE, 0x32F6, 0x8EA2, 0xEDA1, 0xEDFE, 0x3354, 0x8EA2, 0xEEA1,
    0xEEFE, 0x33B2, 0x8EA2, 0xEFA1, 0xEFFE, 0x3410, 0x8EA2, 0xF0A1, 0xF0FE,
    0x346E, 0x8EA2, 0xF1A1, 0xF1FE, 0x34CC, 0x8EA2, 0xF2A1, 0xF2C4, 0x352A,
};
