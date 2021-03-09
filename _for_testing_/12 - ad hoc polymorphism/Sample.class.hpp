#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	Sample(void);
	~Sample(void);

	void		bar( char const c ) const;
	void		bar( int const num ) const;
	void		bar( float const z ) const;
	void		bar( Sample const & i ) const;

};

#endif
