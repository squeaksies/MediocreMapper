// Fill out your copyright notice in the Description page of Project Settings.

#include "ColorConverter.h"

int UColorConverter::ColortoInt(FLinearColor color)
{
	int r = color.R * 255;
	int g = color.G * 255;
	int b = color.B * 255;
	return 2000000000+((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff);
}

FLinearColor UColorConverter::InttoColor(int color)
{
	color = color - 2000000000;
	FLinearColor outColor;
	outColor.B = (float)(color & 0xFF)/0xFF;
	outColor.G = (float)(color >> 8 & 0xFF)/0xFF;
	outColor.R = (float)(color >> 16 & 0xFF)/0xFF;
	outColor.A = 1;
	return outColor;
}
