package com.gaulois94;

import com.gaulois94.Graphics.Renderer;
import android.view.Surface;
import android.content.Context;

public class TacticsRenderer extends Renderer
{
	public TacticsRenderer(Context c)
	{
		super(c);
	}

	@Override
	public long createPtr(long parent, Surface surface)
	{
		return createTacticsRenderer(parent, surface);
	}

	static private native long createTacticsRenderer(long parent, Surface surface);
}