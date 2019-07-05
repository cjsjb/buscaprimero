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

		R2*2  |
		c 2  |
		g, 2  |
%% 5
		a, 2  |
		e, 2  |
		f, 2  |
		c 2  |
		g, 2  |
%% 10
		g, 4. d 8  |
		c 4. c 8  |
		g, 4 g, 8 b,  |
		a, 8 e, a, b,  |
		e 2  |
%% 15
		f 2  |
		c 2 \>  |
		g, 2  |
		c 2  |
		R2*7 \!  |
		r4 a, 8 b,  |
		c 4 b, 8 c  |
		d 4 b, 8 d  |
		c 8 a, c d  |
%% 30
		e 2  |
		f 2  |
		c 2  |
		g, 2  |
		c 2  |
%% 35
		\bar "|."
	}
>>
