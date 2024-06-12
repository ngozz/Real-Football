/*
	Copyright (C) 2024 Vizrt NDI AB. All rights reserved.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

#pragma once

#include <CoreMinimal.h>
#include <Factories/Factory.h>
#include <UObject/Object.h>

#include "NDIMediaSenderFactory.generated.h"

/**
	Factory Class used to create assets via content browser for NDI Sender objects
*/
UCLASS()
class NDIIOEDITOR_API UNDIMediaSenderFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	public:
		virtual FText GetDisplayName() const override;
		virtual uint32 GetMenuCategories() const override;

		virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};