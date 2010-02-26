//--------------------------------------------------------------------------------
// This file is a portion of the Hieroglyph 3 Rendering Engine.  It is distributed
// under the MIT License, available in the root of this distribution and 
// at the following URL:
//
// http://www.opensource.org/licenses/mit-license.php
//
// Copyright (c) 2003-2010 Jason Zink 
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// SwapChainDX11
//
//--------------------------------------------------------------------------------
#include "RendererDX11.h"
//--------------------------------------------------------------------------------
#ifndef SwapChainDX11_h
#define SwapChainDX11_h
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class SwapChainDX11
	{
	public:
		SwapChainDX11( IDXGISwapChain* pSwapChain, ResourcePtr resource );
		virtual ~SwapChainDX11();

	protected:
		IDXGISwapChain*			m_pSwapChain;
		ResourcePtr				m_Resource;

		friend RendererDX11;
	};
};
//--------------------------------------------------------------------------------
#endif // SwapChainDX11_h
//--------------------------------------------------------------------------------
