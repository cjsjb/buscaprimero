\context Staff = "track-cello" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "bass"
		\key c \major

		R1*2  |
		c 1  |
		g, 1  |
%% 5
		a, 1  |
		e, 1  |
		f, 1  |
		c 1  |
		g, 1  |
%% 10
		g, 2. d 4  |
		c 2. c 4  |
		g, 2 g, 4 b,  |
		a, 4 e, a, b,  |
		e 1  |
%% 15
		f 1  |
		c 1 \>  |
		g, 1  |
		c 1  |
		R1*7 \!  |
		r2 a, 4 b,  |
		c 2 b, 4 c  |
		d 2 b, 4 d  |
		c 4 a, c d  |
%% 30
		e 1  |
		f 1  |
		c 1  |
		g, 1  |
		c 1  |
	}
>>
