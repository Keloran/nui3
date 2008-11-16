/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot

  licence: see nui3/LICENCE.TXT
*/

#ifndef __nuiToggleButton_h__
#define __nuiToggleButton_h__

//#include "nui.h"
#include "nuiContainer.h"
#include "nuiEvent.h"
#include "nuiButton.h"
#include "nuiStateDecoration.h"
#include "nuiImage.h"


/// This class implements a simple push button that acts as a container for a label, an image, or any other inactive widget element.
class NUI_API nuiToggleButton : public nuiButton
{ 
public:
  nuiToggleButton(); ///< Create a simple button (empty).
  nuiToggleButton(const nglString& rText); ///< Create a simple button with a nuiLabel as a child filling the client area.
  nuiToggleButton(nuiStateDecoration* pDecoration); ///< Create a simple button with a skin.
  nuiToggleButton(const nglImage& rImage); ///< Create a simple button with a nuiImage as a child filling the client area.
  virtual bool Load(const nuiXMLNode* pNode); ///< Create a button from an XML description.
  virtual ~nuiToggleButton();

  virtual nuiRect CalcIdealSize();
  virtual bool SetRect(const nuiRect& rRect);

  // Rendering:
  virtual bool Draw(nuiDrawContext* pContext);

  // Received Mouse events:
  virtual bool MouseClicked  (nuiSize X, nuiSize Y, nglMouseInfo::Flags Button);
  virtual bool MouseUnclicked  (nuiSize X, nuiSize Y, nglMouseInfo::Flags Button);
  virtual bool MouseMoved(nuiSize X, nuiSize Y);

	virtual bool MouseUngrabbed();
	
  void SetDisplayAsCheckBox(bool set);
  void SetDisplayAsFrameBox(bool set);

  // Class attributes:
  static nuiSize GetDefaultCheckSize(); ///< Retreive the default checkbox size of every button that will be created.
  static void SetDefaultCheckSize(nuiSize CheckSize); ///< Set the default checkbox size of every button that will be created.

  nuiSize GetCheckSize() const { return mCheckSize; }
  void SetCheckSize(nuiSize checkSize) { mCheckSize = checkSize; }
  
  bool HasContents() const;
  
  nuiSimpleEventSource<nuiWidgetActivated> Deactivated;
  
protected:
  static nuiSize mDefaultCheckSize;

  bool mDisplayAsCheckBox;
  bool mDisplayAsFrameBox;
  nuiSize mCheckSize;
  bool mHasContents;

};

#endif // __nuiToggleButton_h__
