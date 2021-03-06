//////////////////////////////////////////////////////////////////////
//
//  FILE:       naglatex.h
//              Translationtable for NAG values to Tex.
//
//  Part of:    Scid (Shane's Chess Information Database)
//  Version:    3.6
//
//  Notice:     Copyright (c) 2000-2003 Shane Hudson.  All rights reserved.
//
//  Author:     Shane Hudson (sgh@users.sourceforge.net)
//	Updated:	W. van den Akker
//
//////////////////////////////////////////////////////////////////////


const char * evalNagsLatex [] =
{
	"",  // one for the offset
	"!",  // $1
	"?",  // $2 
	"!!",  // $3
	"??",  // $4
	"!?",  // $5
	"?!",  // $6
	"forced",  // $7
	"{\\onlymove}",  	// $8
	"worst",  // $9
	"{\\equal}",  		// $10
	"",  // $11
	"{$\\leftrightarrows$}",  // $12 
	"{\\unclear}",  	// $13
	"{\\wbetter}",  	// $14
	"{\\bbetter}",  	// $15
	"{\\wupperhand}",  	// $16
	"{\\bupperhand}",  	// $17
	"{\\wdecisive}",  	// $18
	"{\\bdecisive}",  	// $19
	"",  // $20
	"",  // $21
	"{\\zugzwang}",  	// $22 
	"{\\zugzwang}",  // $23
	"",  // $24
	"",  // $25
	"{\\moreroom}",  	// $26
	"",  // $27
	"",  // $28
	"",  // $29
	"{$\\circlearrowleft$}",  // $30
	"{$\\circlearrowright$}",  // $31
	"",  // $32 
	"",  // $33
	"",  // $34
	"{\\devadvantage}",	// $35
	"{\\withinit}",  	// $36
	"",  // $37
	"",  // $38
	"",  // $39
	"{\\withattack}",  	// $40
	"",  // $41
	"",  // $42 
	"",  // $43
	"{\\compensation}",  // $44
	"",  // $45
	"",  // $46
	"",  // $47
	"{$$\\boxplus$$}",  // $48
	"{$$\\boxplus$$}",  // $49
	"{\\centre}",  		// $50
	"{\\centre}",  // $51
	"",  // $52 
	"",  // $53
	"",  // $54
	"",  // $55
	"",  // $56
	"",  // $57
	"{\\kside}",  		// $58
	"",  // $59
	"",  // $60
	"",  // $61
	"{\\qside}",  		// $62 
	"",  // $63
	"",  // $64
	"",  // $65
	"",  // $66
	"",  // $67
	"",  // $68
	"",  // $69
	"",  // $70
	"",  // $71
	"",  // $72 
	"",  // $73
	"",  // $74
	"",  // $75
	"",  // $76
	"",  // $77
	"",  // $78
	"",  // $79
	"",  // $80
	"",  // $81
	"",  // $82 
	"",  // $83
	"",  // $84
	"",  // $85
	"",  // $86
	"",  // $87
	"",  // $88
	"",  // $89
	"",  // $90
	"",  // $91
	"",  // $92 
	"",  // $93
	"",  // $94
	"",  // $95
	"",  // $96
	"",  // $97
	"",  // $98
	"",  // $99
	"",  // $100
	"",  // $101
	"",  // $102 
	"",  // $103
	"",  // $104
	"",  // $105
	"",  // $106
	"",  // $107
	"",  // $108
	"",  // $109
	"",  // $110
	"",  // $111
	"",  // $112 
	"",  // $113
	"",  // $114
	"",  // $115
	"",  // $116
	"",  // $117
	"",  // $118
	"",  // $119
	"",  // $120
	"",  // $121
	"",  // $122 
	"",  // $123
	"",  // $124
	"",  // $125
	"",  // $126
	"",  // $127
	"",  // $128
	"",  // $129
	"",  // $130
	"",  // $131
	"{\\counterplay}",	// $132
	"",  // $133
	"",  // $134
	"",  // $135
	"{\\timelimt}",  	// $136
	"",  // $137
	"",  // $138
	"",  // $139
	"{\\withidea}",  	// $140
	"",  // $141
	"{\\betteris}",  	// $142 
	"",  // $143
	"{\\various}",  	// $144
	"{\\comment}",  	// $145
	"{\\novelty}",  	// $146
	"{\\weakpt}",  		// $147
	"{\\ending}",  		// $148
	"{\\file}",  		// $149
	"{\\diagonal}",  	// $150
	"{\\bishoppair}",  	// $151
	"",	  // $152
	"{\\opposbishops}",  	// $153 
	"{\\samebishops}",  	// $154
	"",  // $155
	"",  // $156
	"",  // $157
	"",  // $158
	"",  // $159
	"",  // $160
	"",  // $161
	"",  // $162 
	"",  // $163
	"",  // $164
	"",  // $165
	"",  // $166
	"",  // $167
	"",  // $168
	"",  // $169
	"",  // $170
	"",  // $171
	"",  // $172 
	"",  // $173
	"",  // $174
	"",  // $175
	"",  // $176
	"",  // $177
	"",  // $178
	"",  // $179
	"",  // $180
	"",  // $181
	"",  // $182 
	"",  // $183
	"",  // $184
	"",  // $185
	"",  // $186
	"",  // $187
	"",  // $188
	"",  // $189
	"{\\etc}",  		// $190
	"{\\doublepawns}", 	// $191
	"{\\seppawns}",  	// $192
	"{\\unitedpawns}",  	// $193
	"",  // $194
	"",  // $195
	"",  // $196
	"",  // $197
	"",  // $198
	"",  // $199
	"",  // $200
	"",  // $201
	"",  // $202
	"",  // $203
	"",  // $204
	"",  // $205
	"",  // $206
	"",  // $207
	"",  // $208
	"",  // $209
	"{\\see}",  		// $210
	"{\\mate}",  		// $211
	"{\\passedpawn}",  	// $212
	"{\\morepawns}",  	// $213
	"{\\with}",  		// $214
	"{\\without}",  	// $215
	"",  // $216
	"",  // $217
	"",  // $218
	"",  // $219
	"",  // $220
	"",  // $221
	"",  // $222
	"",  // $223
	""   // $224
};
