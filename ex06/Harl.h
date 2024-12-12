#ifndef HARL_H
# define HARL_H
# undef LEVELS
# define LEVELS 4
# include <string>

class Harl
{
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        void    complain( std::string level );
};

#endif