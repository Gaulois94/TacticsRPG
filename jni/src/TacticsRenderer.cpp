#include "TacticsRenderer.h"

TacticsRenderer::TacticsRenderer(Updatable* parent) : Renderer(parent), tmap(NULL)
{
}

TacticsRenderer::~TacticsRenderer()
{
	if(tmap)
		delete tmap;
/*  delete m_zombTexture;
	delete m_skelTexture;
	delete m_zomb;
	delete m_skel;
	*/
}

void TacticsRenderer::onFocus(uint32_t pID, Render& render)
{
	/*
	glm::vec4 v(touchCoord[pID].x, touchCoord[pID].y, 0.0f, 1.0f);
	v = glm::inverse(getCamera().getMatrix())*v;
	if(tmap->getTile(v.x, v.y))
		LOG_ERROR("Yeah ! ");
	*/
}

void TacticsRenderer::accelerometerEvent(float x, float y, float z)
{
}

void TacticsRenderer::init()
{
	Renderer::init();
/*
	File file(JniMadeOf::jenv, JniMadeOf::context, "Resources/Tile.xml", "r");
	m_mtl = new TextureMaterial();
	tmap = new TMap(this, file);
	tmap->setUpdateFocus(false);
	tmap->scale(glm::vec3(0.01, 0.01, 0.01)*0.5f);
	tmap->move(glm::vec3(-1.0, -1.0, 0.0));
	tmap->rotate(-30*3.14/180, glm::vec3(0.0, 0.0, 1.0));
	m_skelTexture = Texture::loadAndroidFile("skeleton.png");
	m_zombTexture = Texture::loadAndroidFile("Zombie.png");
	m_skel = new Sprite(this, m_mtl, m_skelTexture);
	m_skel->scale(glm::vec3(0.2, 0.2, 1));
	m_skel->setPosition(glm::vec3(0.1, 0.1, 0.0));

	m_zomb = new Sprite(this, m_mtl, m_zombTexture);
	m_zomb->scale(glm::vec3(0.2, 0.2, 1));
	m_zomb->setPosition(glm::vec3(0.1, 0.3, 0.0));
*/
}
