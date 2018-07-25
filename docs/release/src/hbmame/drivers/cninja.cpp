// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/cninja.cpp"

// You can choose from 12 characters instead of 8
ROM_START( deathbrdh01 )
	ROM_REGION( 0x80000, "maincpu", 0 )
	ROM_LOAD16_BYTE("h01.03.2c", 0x00000, 0x20000, CRC(3817f150) SHA1(0568fdf517737d00e2990a83e6b5195f4f230ce2) )
	ROM_LOAD16_BYTE("h01.00.2a", 0x00001, 0x20000, CRC(d307dea6) SHA1(b0de4b4c5f10ff8e2cc132b7f9d51bb0eec5629c) )
	ROM_LOAD16_BYTE("hd-04-1.4c", 0x40000, 0x20000, CRC(fd2ea8d7) SHA1(00e50d42fcc7f6d5076963b02f5abb36275dc993) )
	ROM_LOAD16_BYTE("hd-01-1.4a", 0x40001, 0x20000, CRC(48a247ac) SHA1(c69d67e44ffae92b261de247f8d3eac2e02fcf11) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "hd-12.21j",  0x00000,  0x10000,  CRC(13d55f11) SHA1(6438dca57f43b3ca6d273bf82b62104a49260132) )

	ROM_REGION( 0x0a0000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "hd-06-1.8d", 0x000000, 0x10000, CRC(8b7a558b) SHA1(06f1f6910b9a54e208ee9a0b734d5df946016236) )
	ROM_LOAD16_BYTE( "hd-07-1.9d", 0x000001, 0x10000, CRC(d2a3d449) SHA1(10ad634eb0238f6e9ba04266e4dbaf9470f5d169) )

	ROM_REGION( 0x080000, "gfx2", 0 )
	ROM_LOAD( "maf-00.8a", 0x000000, 0x80000,  CRC(e56f528d) SHA1(3908d9b189fa4895c532d1d1f133df0913810cf9) )

	ROM_REGION( 0x100000, "gfx3", 0 )
	ROM_LOAD( "maf-01.9a",  0x000000, 0x40000,  CRC(c3d5173d) SHA1(2b6559bf65d7cc5b957ad347b64cf6a18f661686) )
	ROM_CONTINUE(           0x080000, 0x40000 )
	ROM_LOAD( "maf-02.11a", 0x040000, 0x40000,  CRC(0b37d849) SHA1(a0606fb8130a2e86a241ce5ce0b4f61373a88c17) )
	ROM_CONTINUE(           0x0c0000, 0x40000 )

	ROM_REGION( 0x500000, "gfx4", 0 )
	ROM_LOAD16_BYTE( "maf-03.18a",   0x000000, 0x100000, CRC(f4366d2c) SHA1(20964d0e1b879b3e5cb5d18a46d2a17dca2b4171) )
	ROM_LOAD16_BYTE( "maf-04.20a",   0x200000, 0x100000, CRC(0c8f654e) SHA1(e566d4b789b345e20caf7e061e43be7c2e1be9b2) )
	ROM_LOAD16_BYTE( "maf-05.21a",   0x400000, 0x080000, CRC(b0cfeb80) SHA1(b8519c604b03eb8bcf26d00a43b39d48f1b45ab5) )
	ROM_LOAD16_BYTE( "maf-06.18d",   0x000001, 0x100000, CRC(f5c7a9b5) SHA1(92efc9401347598c90acf62c9aef30109c990ad6) )
	ROM_LOAD16_BYTE( "maf-07.20d",   0x200001, 0x100000, CRC(fd6008a3) SHA1(7b680424eca3804c70fa0c4dc415d665c8626498) )
	ROM_LOAD16_BYTE( "maf-08.21d",   0x400001, 0x080000, CRC(e41cf1e7) SHA1(06524e1aed0adc4c32c92e16a00dc983014f4994) )

	ROM_REGION( 0x40000, "gfx5", 0 )
	ROM_LOAD32_BYTE("hf-08.15a", 0x00001, 0x10000, CRC(93b7279f) SHA1(14304a1ffe1bc791bfa83f8200793d897449133c) )
	ROM_LOAD32_BYTE("hf-09.17a", 0x00003, 0x10000, CRC(05e2c074) SHA1(ec95303e8196424864964b5d2ae862bf75571e83) )
	ROM_LOAD32_BYTE("hf-10.15c", 0x00000, 0x10000, CRC(9b06f418) SHA1(d1579ae36676e38c96ee55a1ffa20aa307a21654) )
	ROM_LOAD32_BYTE("hf-11.17c", 0x00002, 0x10000, CRC(3859a531) SHA1(a2a0c1aa28181b5ef6c075ff0118178340389693) )

	ROM_REGION( 0x40000, "oki1", 0 )
	ROM_LOAD( "maf-10.20l",    0x00000, 0x40000, CRC(7c57f48b) SHA1(9a5624553b3b038d70f9b517f410a635c00a8771) )

	ROM_REGION( 0x80000, "oki2", 0 )
	ROM_LOAD( "maf-09.18l",    0x00000, 0x80000, CRC(28e7ed81) SHA1(e168a2748b75c647f6f9c0d7d25d4f046aa98094) )
ROM_END

HACK( 1992, deathbrdh01, mutantf,  mutantf,  mutantf,  cninja_state, mutantf,  ROT0, "Unknown", "Death Brade (Plus Plus)(Japan ver JM-3)", MACHINE_SUPPORTS_SAVE )

